#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

float getindex(string text)
{
    int letters = 0;
    int words = 0;
    int sentences = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]) != 0)
        {
            letters = letters + 1;
        }
        if (text[i] == ' ')
        {
            words = words + 1;
        }
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences = sentences + 1;
        }
    }
    words += 1;
    // Because we were counting number of spaces, and that to word is plus one.
    float L = ((float) (letters) / words) * 100.0;
    // the average number of letters per 100 words in the text
    float S = ((float) (sentences) / words) * 100.0;
    // the average number of sentences per 100 words in the text.
    float index = ((0.0588 * L) - (0.296 * S)) - 15.8;
    return index;
}
int main(void)
{
    string text = get_string("Text: ");
    int grade = round(getindex(text));
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", grade);
    }
}
