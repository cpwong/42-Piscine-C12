#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list_ptr;

	if (!begin_list || !data_ref || !cmp)
		return (NULL);

	list_ptr = begin_list;
	while (list_ptr != NULL)
	{
		if (!(*cmp)(list_ptr->data, data_ref))
			return (list_ptr);
		list_ptr = list_ptr->next;
	}
	return (NULL);
}