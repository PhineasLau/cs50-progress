#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int getscore(string word)
{
    int score = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        char letter = toupper(word[i]);
        if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'L' || letter == 'N' ||
            letter == 'O' || letter == 'R' || letter == 'S' || letter == 'T' || letter == 'U')
        {
            score = score + 1;
        }
        else if (letter == 'D' || letter == 'G')
        {
            score = score + 2;
        }
        else if (letter == 'B' || letter == 'C' || letter == 'M' || letter == 'P')
        {
            score = score + 3;
        }
        else if (letter == 'F' || letter == 'H' || letter == 'V' || letter == 'W' || letter == 'Y')
        {
            score = score + 4;
        }
        else if (letter == 'K')
        {
            score = score + 5;
        }
        else if (letter == 'J' || letter == 'X')
        {
            score = score + 8;
        }
        else if (letter == 'Q' || letter == 'Z')
        {
            score = score + 10;
        }
    }
    return score;
}

int main(void)
{
    string word1 = get_string("Player1: ");
    string word2 = get_string("Player2: ");
    int score1 = getscore(word1);
    int score2 = getscore(word2);
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}
