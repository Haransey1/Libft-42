#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			j;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	j = 1;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		j = -1;
		d += n - 1;
		s += n - 1;
	}
	while (i < n)
	{
		*d = *s;
		d += j;
		s += j;
		i++;
	}
	return (dest);
}

int main(void)
{
	char str1[]= "Hello world!";
	char str2[20];
	ft_memmove(str2, str1, 13);

	printf("str2: %s\n", str2);
}