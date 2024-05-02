#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*this;

	this = begin_list;
	if (!this)
		return (NULL);
	while (this->next != NULL)	
	{
		this = this->next;
	}
	return (this);
}
