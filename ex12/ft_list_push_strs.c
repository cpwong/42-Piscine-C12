#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*list = NULL;

	if (size <= 0 || !(strs))
		return (NULL);
	while (size > 0)
	{
		ft_list_push_front(&list, (char *)strs[size - 1]);
		size--;
	}
	return (list);
}