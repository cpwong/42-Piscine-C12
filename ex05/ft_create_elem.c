#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*ptr;

	ptr = (t_list *)malloc(sizeof(t_list));
	if (!ptr)
		return (NULL);
	printf("ft_create_elem... ptr = %p, data = %s\n", ptr, (char *)data);
	ptr->data = data;
	ptr->next = NULL;
	// printf("\tptr = %p\n", ptr);
	return (ptr);
}