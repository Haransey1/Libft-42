#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s;
	size_t	d;
	size_t	di;
	size_t	si;

	si = ft_strlen((char *)src);
	if (!dst && size == 0)
		return (si);
	d = ft_strlen(dst);
	di = d;
	if (size <= di)
		return (size + si);
	s = 0;
	while (src[s] && d + 1 < size)
	{
		dst[d] = src[s];
		s++;
		d++;
	}
	dst[d] = 0;
	return (di + si);
}
/*
int main()
{
    char dest[20] = "Hello, ";
    const char *src = "world!";

    size_t result = ft_strlcat(dest, src, sizeof(dest));

    printf("Concatenated string: %s\n", dest);
    printf("Total length: %zu\n", result);

    return 0;
}**/
