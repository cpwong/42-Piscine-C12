#include "ft_list.h"

void	ft_print_list(t_list *head) 
{
    while (head) {
        printf("%s -> ", (char *)head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void	ft_free_node_data(void *data)
{
	if (data)
	{
		data = NULL;
	}
}

int	main(void)
{

	char	*str_1[] = {"First", "Second", "Third", "REPEAT", "Fourth", "Fifth", 
		"Sixth", "Seventh", "Eighth", "REPEAT", "Ninth", "Tenth" };
	int	size_1 = 12;
	t_list *list_1 = ft_list_push_strs(size_1, str_1);

	printf("Before...\n");
	ft_print_list(list_1);

	printf("Remove 'First'...\n");
	ft_list_remove_if(&list_1, "First", strcmp, ft_free_node_data);
	ft_print_list(list_1);

	printf("Remove 'Tenth'...\n");
	ft_list_remove_if(&list_1, "Tenth", strcmp, ft_free_node_data);
	ft_print_list(list_1);

	printf("Remove 'REPEAT'...\n");
	ft_list_remove_if(&list_1, "REPEAT", strcmp, ft_free_node_data);
	ft_print_list(list_1);
}