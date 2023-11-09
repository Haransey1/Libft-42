#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest != src)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

int main(void)
{
	char *src= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char dest[27];
	char *src1= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char dest1[27];

	memcpy(dest, src, strlen(src));
	ft_memcpy(dest1, src1, strlen(src1));

	printf("original: %s\n", dest);
	printf("manipulation: %s\n", dest1);
}
