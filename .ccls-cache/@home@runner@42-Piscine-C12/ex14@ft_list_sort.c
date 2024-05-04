#include "ft_list.h"

void	ft_split_list(t_list *src, t_list **front, t_list **back)
{
	t_list	*fast = src->next;
	t_list	*slow = src;

	printf("\tft_split_list...%s\n", src ? (char *)src->data : "-");
	while (fast != NULL)
	{
		fast = fast->next;
		if (fast != NULL)
		{
			slow = slow->next;
			fast = fast->next;
		}
	}
	*front = src;
	*back = slow->next;
	slow->next = NULL;
}

t_list	*ft_merge_list(t_list *n1, t_list *n2, int (*cmp)())
{
	t_list	*result;

	printf("\tft_merge_list... %s, %s\n",
		n1 ? (char *)n1->data : "-",
		n2 ? (char *)n2->data : "-");
	result = NULL;
	if (!n1)
		return (n2);
	if (!n2)
		return (n1);
	if (cmp(n1->data, n2->data) < 0)
	{
		result = n1;
		result->next = ft_merge_list(n1->next, n2, cmp);
	}
	else
	{
		result = n2;
		result->next = ft_merge_list(n1, n2->next, cmp);
	}
	return (result);
}

t_list	*ft_do_sort(t_list *head, int (*cmp)())
{
	t_list	*left;
	t_list	*right;

	printf("ft_do_sort... %s\n", head ? (char *)head->data : "-");
	if (!head || !head->next)
		return head;
	ft_split_list(head, &left, &right);
	left = ft_do_sort(left, cmp);
	right = ft_do_sort(right, cmp);
	return (ft_merge_list(left, right, cmp));
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	*begin_list = ft_do_sort(*begin_list, cmp);
}