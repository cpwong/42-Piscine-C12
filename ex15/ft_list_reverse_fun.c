#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*this;
	t_list	*previous;
	t_list	*next;

	this = begin_list;
	if (!this)
		return ;
	previous = NULL;
	while (this != NULL)
	{
		next = this->next;
		this->next = previous;
		previous = this;
		this = next;
	}
	begin_list = previous;
}
