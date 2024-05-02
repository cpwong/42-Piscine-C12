#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list		*this;
	
	i = 0;
	this = begin_list;
	while (i < nbr)
	{
		if (!this)
			return (NULL);
		this = this->next;
		printf("\ti = %d\n", i);
		i++;	
	}
	return (this);
}