#include <stdio.h>
#include <string.h>

#define SIZE 25

void    *ft_memmove(void *dest, const void *src, size_t n)
{
  size_t i;
    i = 0;
    
    if (src > dest)
    {
        while (n > 0 && dest && src)
        {
            *((char *)dest + i) = *((char *)src + i);
            i++;
            n--;
        }
        return (dest);
        
    }
    if (src < dest)
    {
    /* Use *((char *)dest + i)) != '\0' && *((char *)src + i)) 
    * to work safe with null terminator                       */
        while (n > 0 && (*(char *)dest + i) != '\0' && (*(char *)src + i) != '\0')
        {
            *((char *)dest + i) = *((char *)src + i);
            i++;
            n--;
        }
        return (dest);
        
    }
}

int main(void)
{
  char str[SIZE], *p;

  strcpy(str, "ABCDEFGH1234567890");
  p = str + 5;

  ft_memmove(str+16, p, 13);
  printf("result of move: %s", str);

  return 0;
}
