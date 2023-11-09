#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)

{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

int main ()
{
	char buffer[10];

	ft_memset(buffer, 'R', sizeof(buffer));

	// Print the contents of the buffer
	printf("Buffer: %s\n", buffer);
}
