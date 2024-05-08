#include "ft_list.h"

void	ft_print_list(t_list *head)
{
	while (head)
	{
		printf("%s -> ", (char *)head->data);
		head = head->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list	*list_00 = NULL;

	char	*str_1[] = {"First"};
	int	size_1 = 1;
	t_list *list_1 = ft_list_push_strs(size_1, str_1);

	char	*str_2[] = {"Second", "First"};
	int	size_2 = 2;
	t_list *list_2 = ft_list_push_strs(size_2, str_2);

	// char	*str_3[] = {"First", "Second", "Third", "Fourth", "Fifth", 
	// 	"Sixth", "Seventh", "Eighth", "Ninth", "Tenth" };
	char	*str_3[] = {"5", "3", "2", "7", "9", "1", "8", "6", "4", "0"};
	int	size_3 = 10;
	t_list *list_3 = ft_list_push_strs(size_3, str_3);

	printf("Test #0: Sort empty list\n");
	// ft_print_list(list_00);
	ft_list_sort(&list_00, strcmp);
	ft_print_list(list_00);

	printf("Test #1: Sort list with 1 item\n");
	// ft_print_list(list_1);
	ft_list_sort(&list_1, strcmp);
	ft_print_list(list_1);

	printf("Test #2: Sort list with 2 items\n");
	// ft_print_list(list_2);
	ft_list_sort(&list_2, strcmp);
	ft_print_list(list_2);

	printf("Test #3: Sort list with 10 items\n");
	ft_print_list(list_3);
	ft_list_sort(&list_3, strcmp);
	ft_print_list(list_3);
}