#include "ft_list.h"

void	ft_print_list(t_list *head);

void	ft_swap(t_list **head, t_list **n1, t_list **n2)
{
	t_list	*temp;
	t_list	*prev;

	printf("\tft_swap ...head = %s, n1 = %s, n2 = %s\n", 
		*head ? (char *)(*head)->data : "NULL",
		*n1 ? (char *)(*n1)->data : "NULL",
		*n2 ? (char *)(*n2)->data : "NULL");
	if (!head || !n1 || !n2)
		return ;
	if (*head == *n1)
		prev = NULL;
	else
	{
		prev = *head;
		while (prev->next != *n1)
		{
			prev = prev->next;
		}
		printf("\t\tprev = %s\n", prev ? (char *)prev->data : "-");
	}
	if (*n1 == *head)
	{
		*head = *n2;
	}
	else if (*n2 == *head)
	{
		*head = *n1;
	}
	if (prev)
		prev->next = *n2;
	(*n1)->next = (*n2)->next;
	(*n2)->next = (*n1);

	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
	printf("\t\t...head = %s, n1 = %s, n2 = %s\n", 
		*head ? (char *)(*head)->data : "NULL",
		*n1 ? (char *)(*n1)->data : "NULL",
		*n2 ? (char *)(*n2)->data : "NULL");
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*sorted;
	t_list	*this;
	t_list	*next;
	t_list	*temp;

	if (!(*begin_list) || !(*begin_list)->next || !(cmp))
		return ;
	sorted = NULL;
	this = *begin_list;
	while (this)
	{
		next = this->next;
		if (sorted == NULL || cmp(this->data, sorted->data) <= 0)
		{
			this->next = sorted;
			sorted = this;
		}
		else
		{
			temp = sorted;
			while (temp->next && cmp(this->data, temp->next->data) > 0)
			{
				temp = temp->next;
			}
			this->next = temp->next;
			temp->next = this;
		}
		this = next;
		printf("\t\tthis = %s, sorted = %s\n",
			this ? (char *)this->data : "-",
			sorted ? (char *)sorted->data : "-");	
	}
	*begin_list = sorted;

}