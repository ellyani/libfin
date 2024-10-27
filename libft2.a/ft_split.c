#include "libft.h"

int count_words(char *str , char delimiter)
{
    int count = 0;
    int in_word = 0;

    while (*str)
    {
        if (*str == delimiter)
        {
            in_word = 0;
        }
        else if (!in_word)
        {
            in_word = 1;
            count++;
        }
        str++;
    }
    return (count);
}

char *aller_mot_suivante(char **str ,char delimiter)
{
    char start;
    size_t  longueur;

    while (**str == delimiter)
    {
        (*str)++;
    }
    start = *str;
    while (**str && **str !=delimiter)
    {
        (*str)++;
    }
    longueur = *str - start;

    char *word = (char *)malloc(longueur + 1);
    
    if (word)
    {
        strncpy (word , start ,longueur);
        word[longueur] = '\0';
    }
    return (word);
}

char **ft_split(char const *s, char c)
{
    if (!s)
        return (NULL);
    int word_count =count_words(s,c);
    char **result = (char **)malloc((word_count + 1) * sizeof(char *)); 

    if (!result)
        return (NULL);
    
    int index = 0;
    while (*s)
    {
        char *word = aller_mot_suivante (&s ,c);
        if (!word) break;
        result [index++] = word;
    }
    return (result);
}