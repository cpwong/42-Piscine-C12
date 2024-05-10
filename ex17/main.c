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

int		ft_cmp(char *str_1, char *str_2)
{
	return (strcmp(str_1, str_2));
}

int		main(void)
{
	char	*str_1[] = { "Apple", "Banana", "Cat", "Duck"};
	int size_1 = 4;
	t_list	*list_1 = ft_list_push_strs(size_1, str_1);

	char	*str_2[] = { "Elephant", "Frog", "Giraffe", "Hyena"};
	int size_2 = 4;
	t_list	*list_2 = ft_list_push_strs(size_2, str_2);

	char	*str_3[] = { "Aardvark", "Crystal", "Elf", "Helicopter"};
	int size_3 = 4;
	t_list	*list_3 = ft_list_push_strs(size_3, str_3);

	ft_print_list(list_1);
	ft_print_list(list_2);

	ft_sorted_list_merge(&list_1, list_2, ft_cmp);
	ft_print_list(list_1);

	ft_sorted_list_merge(&list_1, list_3, ft_cmp);
	ft_print_list(list_1);
}