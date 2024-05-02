#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	count;
	t_list	*this;

	if (!begin_list)
		return (0);
	count = 1;
	this = begin_list;
	printf("ft_list_size... begin_list = %p, this = %p\n", begin_list, this);
	while (this->next != NULL)
	{
		count++;
		this = this->next;
	}
	return (count);
}