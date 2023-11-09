#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n != 0)
	{
		while (src[i] != '\0' && i < (n - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int main ()
{
	char src[] = "today and tomorrow";
	char dest[20];
	size_t size = sizeof(dest);

	size_t result = ft_strlcpy(dest, src, size);

	printf("copied string: %s\n", dest);
	printf("total length of the string copied %zu\n", result);
}**/
