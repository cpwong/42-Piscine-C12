#include "ft_list.h"

// void ft_list_push_front(t_list **begin_list, void *data) {
// 	t_list  *new_el;
	
// 	new_el = ft_create_elem(data);
// 	new_el->next = *begin_list;
// 	*begin_list = new_el;
// }

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*this;
	t_list	*new_node;

	if (!(*begin_list) || !(data) || !(cmp))
		return ;
	
	new_node = ft_create_elem(data);
	this = *begin_list;
	if (cmp(this->data, data) >= 0)
	{
		new_node->next = *begin_list;
		*begin_list = new_node;
		printf("this = %s\n", this ? (char *)this->data : "NULL");
		return ;
	}
	while (this && cmp(this->data, data) < 0)
	{
		if (!this->next || cmp(this->next->data, data) >= 0)
		{
			new_node->next = this->next;
			this->next = new_node;
		}
		this = this->next;
		printf("this = %s\n", this ? (char *)this->data : "NULL");
	}	
}
