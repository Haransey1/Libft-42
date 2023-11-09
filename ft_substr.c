#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	size_t	j;
	char	*substring;
	size_t	i;
	char	*ch;

	ch = (char *)s;
	j = ft_strlen(ch);
	if (s == NULL)
		return (NULL);
	if (len > j - start)
		len = j - start;
	if (start > j)
		return (ft_strdup(""));
	substring = (char *)malloc(len + 1);
	if (substring == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[len] = '\0';
	return (substring);
}

/*#include <stdio.h>
#include <stdlib.h>

// Paste the ft_substr function here

int main() {
    const char *input_string = "This is a test string";
    unsigned int start_index = 5;
    size_t substring_length = 7;

    char *result = ft_substr(input_string, start_index, substring_length);

    if (result != NULL) {
        printf("Original String: %s\n", input_string);
        printf("Substring: %s\n", result);
        free(result); // Don't forget to free the allocated memory
    } else {
        printf("Substring extraction failed.\n");
    }

    return 0;
}
*/