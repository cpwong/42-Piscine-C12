#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_el;

	if (!begin_list)
		return ;
	new_el = ft_create_elem(data);
	ft_list_last(*begin_list)->next = new_el;
}