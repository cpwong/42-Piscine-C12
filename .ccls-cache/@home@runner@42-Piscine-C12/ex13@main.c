#include "ft_list.h"

void	ft_print_list(t_list *head) 
{
	printf("\t");
	while (head) 
	{
		printf("%s -> ", (char *)head->data);
		head = head->next;
	}
	printf("NULL\n\n");
}

int	main(void)
{
	t_list	*list_00 = NULL;
	t_list	*list_01 = NULL;

	char	*str_1[] = {"First", "Second", "Third", "Fourth", "Fifth", 
		"Sixth", "Seventh", "Eighth", "Ninth", "Tenth" };
	int	size_1 = 10;
	t_list *list_1 = ft_list_push_strs(size_1, str_1);

	char	*str_2[] = {"-----", "Eleven", "Twelve", "Thirteen" };
	int	size_2 = 4;
	t_list *list_2 = ft_list_push_strs(size_2, str_2);

	printf("Test #0: Merge 2 empty lists\n");
	ft_list_merge(&list_00, list_01);
	ft_print_list(list_00);

	printf("Test #1: Merge a list with an empty lists\n");
	ft_list_merge(&list_1, list_00);
	ft_print_list(list_1);

	printf("Test #2: Merge an empty list with a list\n");
	ft_list_merge(&list_00, list_1);
	ft_print_list(list_00);

	printf("Test #3: Merge two regular lists\n");
	ft_list_merge(&list_1, list_2);
	ft_print_list(list_1);

}