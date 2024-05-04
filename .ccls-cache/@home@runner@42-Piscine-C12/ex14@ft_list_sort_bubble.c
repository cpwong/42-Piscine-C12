#include "ft_list.h"

void	ft_swap(t_list *prev, t_list **list_1, t_list **list_2)
{
	t_list	*n1;
	t_list	*n2;
	t_list	*temp;
	
	n1 = *list_1;
	n2 = *list_2;
	printf("\tft_swap...prev = %s, n1 = %s, n2 = %s\n", 
		prev ? (char *)prev->data : "NULL",
		n1 ? (char *)n1->data : "NULL",
		n2 ? (char *)n2->data : "NULL");
	printf("\t\t...prev = %p, n1 = %p, n2 = %p\n", prev, *list_1, *list_2);
	if (prev)
	{
		prev->next = n2;
	}
	n1->next = n2->next;
	n2->next = n1;
	temp = *list_1;
	*list_1 = *list_2;
	*list_2 = temp;
	printf("\t\t...prev = %p, n1 = %p, n2 = %p\n", prev, *list_1, *list_2);
	// printf("\t\t...prev = %p, n1 = %p, n2 = %p\n", 
	// 	prev ? prev->next : NULL,
	// 	n1 ? n1->next : NULL,
	// 	n2 ? n2->next : NULL);
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*outer;
	t_list	*inner;
	t_list	*previous;
	
	if (!(*begin_list) || !(cmp))
		return ;
	outer = *begin_list;
	previous = NULL;
	while (outer)
	{
		printf("\touter = %s\n", outer ? (char *)outer->data : "NULL");
		inner = outer->next;
		while (inner)
		{
			printf("\t\tinner = %s\n", inner ? (char *)inner->data : "NULL");
			if ((*cmp)(outer->data, inner->data) > 0)
			{
				ft_swap(previous, &outer, &inner);
				if (outer == *begin_list)
					*begin_list = inner;
				printf("\t\t\tSwapped: inner = %s\n", inner ? (char *)inner->data : "NULL");
				printf("\t\t\tSwapped: outer = %s\n", outer ? (char *)outer->data : "NULL");
			}
			inner = inner->next;
		}
		previous = outer;
		outer = outer->next;
	}
}