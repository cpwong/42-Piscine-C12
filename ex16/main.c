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
	char	*str_1[] = { "Apple", "Banana", "Cat", "Elephant"};
	int size_1 = 4;
	t_list	*list_1 = ft_list_push_strs(size_1, str_1);

	ft_print_list(list_1);

	ft_sorted_list_insert(&list_1, "Duck", ft_cmp);
	ft_print_list(list_1);
	ft_sorted_list_insert(&list_1, "Frog", ft_cmp);
	ft_print_list(list_1);
	ft_sorted_list_insert(&list_1, "Aardvark", ft_cmp);
	ft_print_list(list_1);

}