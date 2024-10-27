#include "libft.h"

char *ft_strnstr(const char *haystack,const char *needle ,size_t len )
{
    size_t  i;
    size_t  j;
    i = 0;
    j = 0;
    while (haystack[i] != '\0' && i <='\0')
    {
        j = 0;
        while (needle[j] != '\0' && (needle[j] == haystack[i+j]) && ((i + j) < len) && haystack[i + j] !='\0')
        {
            j++;
        }
        if (j == ft_strlen (needle))
            return ((char *)haystack + i);
        i++;
    }
    if ((ft_strlen(haystack) == 0) && ft_strlen(needle) == 0)
    {
        return ((char *)haystack);
    }
    return (NULL);
}