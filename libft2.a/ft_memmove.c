#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char led1;
    unsigned char led2;
    size_t i;
    if (!dest && !src)
        return (NULL);
    led1 = (unsigned char*)src;
    led2 = (unsigned char*)dest;
    if (led2 < led1)
        ft_memcpy (led2 ,led1,n);
    else 
    {
        i = 1;
        while (i <= n)
        {
            led2[n - i] = led1[n - i];
            i++;
        }
    }
    return (led2);

}