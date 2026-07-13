#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

void tocipher(string map, string plain);

int main(int argc, string argv[])
{
    char map[26];
    // error check
    if (argc != 2)
    {
        printf("Error, please try again with 2 command line arguement.\n");
        return 1;
    }

    if (strlen(argv[1]) == 26)
    {
        for (int i = 0; i < 26; i++)
        {
            if (isalpha(argv[1][i]) == 0)
            {
                printf("All 26 letters must be in the alphabet! Please try again.\n");
                return 1;
            }
            map[i] = argv[1][i];
        }
    }
    else
    {
        printf("No more or less than 26 characters allowed! Please try again.\n");
        return 1;
    }

    for (int j = 0; j < 26; j++)
    {
        for (int k = j + 1; k < 26; k++)
        {
            if (toupper(map[j]) == toupper(map[k]))
            {
                printf("No same characters are allowed! Please try again.\n");
                return 1;
            }
        }
    }
    // user input
    string plain = get_string("plaintext: ");
    tocipher(map, plain);
}

void tocipher(string map, string plain)
{
    char cipher[strlen(plain) + 1];
    int index = 0;
    for (int i = 0; i < strlen(plain); i++)
    {
        if (isalpha(plain[i]) == 0)
        {
            cipher[i] = plain[i];
        }
        else if (islower(plain[i]) == 0)
        {
            index = plain[i] - 'A';
            cipher[i] = toupper(map[index]);
        }
        else
        {
            index = plain[i] - 'a';
            cipher[i] = tolower(map[index]);
        }
    }
    cipher[strlen(plain)] = '\0';
    printf("ciphertext: %s\n", cipher);
}
