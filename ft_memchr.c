#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)

{
	size_t				i;
	const unsigned char	*p;

	p = s;
	i = 0;
	while (i < n)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
		i++;
	}
	return (NULL);
}
/*
int main() {
    const char *str = "Hello, world!";
    char searchChar = 'o';

    
    const char *result = (const char *)ft_memchr(str, searchChar, strlen(str));

    if (result != NULL) {
        printf("Found '%c' at position %ld\n", searchChar, result - str);
    } else {
        printf("'%c' not found in the string.\n", searchChar);
    }

    return 0;
}**/
