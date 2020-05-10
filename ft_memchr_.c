#include "libft.h"

void  *ft_memchr(const void *s, int c, size_t n)
{	
	size_t i;

	i = 0;
	while(n)
	{
		if (*((unsigned char *)s+i) == ((unsigned char)c))
		{
			return ((unsigned char *)s+i);
		}
		i++;
		n--;
	}
	return (NULL);
}
int main() 
{
	unsigned char s[15]="1234567890";
	ft_memchr(s, '4', 30);
	return 0;
}
