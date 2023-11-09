#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*new_str;
	int		i;

	i = ft_strlen(src);
	new_str = malloc((i + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	ft_strcpy(new_str, src);
	return (new_str);
}
/*
int main() {
    char* str = "Hello, world!";
    char* dep = ft_strdup(str);
	char* dup;
	char* test;

    printf("Original string: %s\n", str);
    printf("Duplicated string: %s\n", dep);



	test = "Testando a função strdup!";
	printf("test = %s\n", test);
	dup = ft_strdup(test);
	printf("dup  = %s\n", dup);
	free(dup);

    free(dep);

    return 0;
}**/
