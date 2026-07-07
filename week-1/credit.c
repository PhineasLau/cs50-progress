#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

string threetype(string card)
{
    string type = "INVALID";
    long cardl = atol(card);
    long starter = cardl;
    while (starter > 99)
    {
        starter = starter / 10;
    }
    if (strlen(card) > 12 && strlen(card) < 17 && strlen(card) != 14)
    {
        if ((strlen(card) == 15) && (starter == 34 || starter == 37))

        {
            type = "AMEX";
        }
        else if (strlen(card) == 16 && (starter > 50 && starter < 56))
        {
            type = "MASTERCARD";
        }
        else if ((strlen(card) == 13 || strlen(card) == 16) && starter / 10 == 4)

        {
            type = "VISA";
        }
    }
    return type;
}

bool checksum(string card)
{
    long cardl = atol(card);
    int total = 0;
    for (long digit = strlen(card) - 2; digit >= 0; digit -= 2)
    {
        int times2 = 0;
        times2 += (card[digit] - '0') * 2;
        total += (times2 % 10) + (times2) / 10;
    }
    for (long digit = strlen(card) - 1; digit >= 0; digit -= 2)
    {
        total += (card[digit] - '0');
    }
    if (total % 10 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    string number = get_string("Number: ");
    if (checksum(number) == true)
    {
        printf("%s\n", threetype(number));
    }
    else
    {
        printf("INVALID\n");
    }
}
