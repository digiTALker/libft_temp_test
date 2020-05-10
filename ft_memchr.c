#include "libft.h"

void  *ft_memchr(const void *s, int c, size_t n)
{	
	while(n)
	{
		if (*((unsigned char *)s+n) == ((unsigned char)c))
		{
			return ((unsigned char *)s+n);
		}
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
