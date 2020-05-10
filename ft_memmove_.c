#include <stdio.h>
#include <string.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{   size_t i;
    i = 0;
    
    if (src > dest)
    {
        while (i < n)
        {
            *((unsigned char *)dest + i) = *((unsigned char *)src + i);
            i++;            
        }
        return (dest);
        
    }
    if (src < dest)
    {
        while (n--)
        {
            *((unsigned char *)dest + n) = *((unsigned char *)src + n);            
            //n--;
        }
        return (dest);      
    }
    return (0);
}


int main(void)
{
  char str[24], *p;

  strcpy(str, "ABCDEFGH1234567890");
  p = str + 5;

  ft_memmove(str, str+3, 13);
  printf("result of move: %s", str);

  return 0;
}
