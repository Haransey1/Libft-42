#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)

{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;
	size_t			j;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	j = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[j] && n - 1 > 0)
	{
		i++;
		j++;
		n--;
	}
	return ((int)str1[i] - str2[j]);
}
/*int main()
{
	char *s1 = "today";
	char *s2 = "tomorrow";
	int result;

	result = ft_memcmp(s1, s2, 4);

	printf("diff: %d\n", result);
}**/
