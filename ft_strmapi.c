#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	length;
	char			*res;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	res = malloc(length * sizeof(char) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < length)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/* 
char uppercase_transform(unsigned int index, char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    return c;
}

int main() {
    const char *inputString = "Hello, World!";
    char *resultString = ft_strmapi(inputString, uppercase_transform);
    
    if (resultString != NULL) {
        printf("Original String: %s\n", inputString);
        printf("Transformed String: %s\n", resultString);
        free(resultString);
    } else {
        printf("Memory allocation failed.\n");
    }
    
    return 0;
}**/