#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*this;

	if (!(*begin_list1) && !begin_list2)
		return ;
	if (!begin_list2)
		return;
	if (!(*begin_list1))
	{
		*begin_list1 = begin_list2;
		return ;
	}
	this = *begin_list1;
	while (this->next != NULL)
	{
		this = this->next;
	}
	this->next = begin_list2;
}

