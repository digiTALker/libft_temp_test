#include <stdio.h>
#include <string.h>

static int check_norm(const char *big, const char *little, char *p_first)
{
  if (strlen(big) < strlen(little))
        return (NULL);
  if (strlen(p_first) < strlen(little))
        return (NULL);      
}

char        *ft_strnstr(const char *big, const char *little, size_t len)
{
    char    *p_first;
    size_t  i = 0;
    int     hit;
    
    
        
    p_first = strchr(big, *little);
    if (check_norm(big, little, p_first) == NULL)
      return (NULL);
    else 
    {
      while (little[i] != '\0' && len > 0 && big[i] != '\0')
      {
          if (p_first[i] == little[i])
          {
              len--;
              i++;
              hit++;
          }
          if (hit == len)
            return (p_first + i);
          else ft_strnstr(p_first, little, len);
      }      
    }
    return (NULL);
    
}



int main()

{  
const char *largestring = "Foo Baz Bar";
const char *smallstring = "Bar";
char *ptr;

ptr = ft_strnstr(largestring, smallstring, 4);

    return (0);

}
