#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
	t_list	*dest;
	t_list	*src;
	t_list	*temp;

	if (!(*begin_list1) || !begin_list2 || !(*cmp))
		return ;
	dest = *begin_list1;
	src = begin_list2;
	while (dest && src)
	{
		printf("ft_sorted_list_merge\t... dest = %s, src = %s\n",
			dest ? (char *)(dest)->data : "-",
			 src ? (char *)(src)->data : "-");
		if (dest == *begin_list1 && cmp(dest->data, src->data) >= 0)
		{
			temp = src;
			src = src->next;
			temp->next = dest;
			*begin_list1 = temp;
		}
		if (cmp(dest->data, src->data) < 0 && 
			dest->next && cmp(dest->next->data, src->data) >= 0)
		{
			temp = src;
			src = src->next;
			temp->next = dest->next;
			dest->next = temp;
		}
		// printf("\t\t\t... dest = %s, src = %s\n",
		// 	dest ? (char *)(dest)->data : "-",
		// 	src ? (char *)(src)->data : "-");
		if (dest->next == NULL)
		{
			dest->next = src;
			src = NULL;
		}
		else
			dest = dest->next;
	}
}