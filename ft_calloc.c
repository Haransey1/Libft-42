#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	array = (void *)malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, (nmemb * size));
	return (array);
}
/*int main() {
    int *arr;
    size_t num_elements = 5;

    // Allocate memory for an array of 5 integers using ft_calloc
    arr = (int *)ft_calloc(num_elements, sizeof(int));

    if (arr == NULL) 
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Initialize the array elements (all set to 0 by ft_calloc)
    for (size_t i = 0; i < num_elements; i++) {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }

    // Deallocate the allocated memory when done
    free(arr);

    return 0;
}**/
