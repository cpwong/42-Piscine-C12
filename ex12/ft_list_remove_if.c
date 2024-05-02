#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, 
	void *data_ref, 
	int (*cmp)(), 
	void (*free_fct)(void *))
{
	t_list	*this;
	t_list	*previous;
	t_list	*next;

	if (!*begin_list || !data_ref || !cmp || !free_fct)
		return ;
	
	this = *begin_list;
	previous = NULL;
	while (this)
	{
		if (!(*cmp)(this->data, data_ref))
		{
			next = this->next;
			if (previous)
			{
				previous->next = next;
			}
			else
				*begin_list = next;
			(*free_fct)(this->data);
			free(this);
			this = next;
		}
		else
		{
			previous = this;
			this = this->next;
		}
	}
}
