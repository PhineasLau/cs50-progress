// Implements a dictionary's functionality

#include "dictionary.h"
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 676;

// Hash table
node *table[N];

// global words stored
unsigned int words_stored = 0;

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    int index = hash(word);
    for (node *i = table[index]; i != NULL; i = i->next)
    {
        if (strcasecmp(word, i->word) == 0)
        {
            return true;
        }
    }

    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    int set = (tolower(word[0]) - 'a') * 26;
    if (word[1] != '\0')
    {
        set += tolower(word[1]) - 'a';
    }
    return set;
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO
    FILE *dict = fopen(dictionary, "r");
    if (dict == NULL)
    {
        return false;
    }
    char buffer[LENGTH + 1];
    while (fscanf(dict, "%s", buffer) == 1)
    {
        node *new_node = malloc(sizeof(node));
        if (new_node == NULL)
        {
            unload();
            fclose(dict);
            return false;
        }
        strcpy(new_node->word, buffer);
        new_node->next = NULL;
        unsigned int index = hash(buffer);
        if (table[index] == NULL)
        {
            table[index] = new_node;
        }
        else
        {
            new_node->next = table[index];
            table[index] = new_node;
        }
        words_stored += 1;
    }
    fclose(dict);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return words_stored;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    for (int b = 0; b < 676; b++)
    {
        node *buffer = NULL;
        node *i = table[b];
        while (i != NULL)
        {
            buffer = i->next;
            free(i);
            i = buffer;
        }
    }
    return true;
}
