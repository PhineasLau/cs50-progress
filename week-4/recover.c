#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover file\n");
        return 1;
    }
    FILE *card = fopen(argv[1], "r");
    if (card == NULL)
    {
        printf("Failed to open the file.\n");
        return 1;
    }
    uint8_t chunk[512];
    int jpg_amount = -1;
    char jpg_name[8];
    bool middle = false;
    FILE *img;
    while (fread(chunk, sizeof(uint8_t) * 512, 1, card) == 1)
    {
        if (chunk[0] == 0xff && chunk[1] == 0xd8 && chunk[2] == 0xff)
        {
            if ((chunk[3] & 0xf0) == 0xe0)
            {
                if (middle == true)
                {
                    fclose(img);
                }
                jpg_amount += 1;
                sprintf(jpg_name, "%03i.jpg", jpg_amount);
                img = fopen(jpg_name, "w");
                fwrite(chunk, sizeof(uint8_t) * 512, 1, img);
                middle = true;
            }
        }
        else
        {
            if (middle == true)
            {
                fwrite(chunk, sizeof(uint8_t) * 512, 1, img);
            }
        }
    }
    fclose(img);
    fclose(card);
}
