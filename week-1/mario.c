#include <cs50.h>
#include <stdio.h>

void generaterow(int rows)
{
    for (int blocks = 0; blocks <= rows; blocks++)
    {
        printf("#");
    }
}
void pyramid(int height)
{
    int decrease = 0;
    for (int rows = 0; rows < height; rows++)
    {
        for (int start = 0; start < (height - 1 - decrease); start++)
        {
            printf(" ");
        }
        decrease++;
        generaterow(rows);
        printf("  ");
        generaterow(rows);
        printf("\n");
    }
}
int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    // Repeat if not fitting
    while (!(height < 9 && height > 0));
    pyramid(height);
}
