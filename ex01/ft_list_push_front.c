#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data) {
	t_list  *new_el;
	
	new_el = ft_create_elem(data);
	new_el->next = *begin_list;
	*begin_list = new_el;
}
