#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static char	*ft_strcat(char *dst, const char *src)
{
	char	*original_dst;

	original_dst = dst;
	while (*dst)
	{
		dst++;
	}
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (original_dst);
}

char	*ft_strjoin(char const *s1, char const *s2)

{
	size_t	s1_len;
	size_t	s2_len;
	char	*newstring;

	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	newstring = (char *)malloc(s1_len + s2_len + 1);
	if (newstring == NULL)
		return (NULL);
	ft_strcpy(newstring, s1);
	ft_strcat(newstring, s2);
	return (newstring);
}
/*int main() {
    // Test ft_strcpy
    char source[] = "Hello, world!";
    char destination[20]; // Ensure enough space for the copy
    ft_strcpy(destination, source);
    printf("Copied String: %s\n", destination);

    // Test ft_strcat
    char str1[] = "Hello, ";
    char str2[] = "world!";
    ft_strcat(str1, str2);
    printf("Concatenated String: %s\n", str1);

    // Test ft_strlen
    const char *text = "This is a test.";
    size_t length = ft_strlen(text);
    printf("Length of '%s': %zu\n", text, length);

    // Test ft_strjoin
    const char *string1 = "Hello, ";
    const char *string2 = "world!";
    char *result = ft_strjoin(string1, string2);
    if (result != NULL) {
        printf("Joined String: %s\n", result);
        free(result); // Free the allocated memory
    } else {
        printf("String joining failed.\n");
    }

    return 0;
}**/
