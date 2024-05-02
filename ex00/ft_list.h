#ifndef FT_LIST_H
#define FT_LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct t_list {
	void *data;
	struct t_list *next;
} t_list;

t_list		*ft_create_elem(void *data);
void 		ft_list_push_front(t_list **begin_list, void *data);

#endif