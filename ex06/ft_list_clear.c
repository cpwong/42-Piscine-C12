#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*this;
	t_list	*next;

	if (!begin_list || !free_fct)
		return ;
	this = begin_list;
	while (this != NULL)
	{
		next = this->next;
		free_fct(this->data);
		free(this);
		this = next;
	}
}