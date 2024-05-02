#include "ft_list.h"

void	ft_free_node_data(void *data)
{
	if (data)
	{
		data = NULL;
		// free(data);
	}
}

int	main(void)
{
	printf("Test Case 0: Empty list\n");
	t_list	*list_0 = NULL;
	ft_list_clear(list_0, ft_free_node_data);

	printf("Test Case 1: Multiple nodes\n");
	char	*str_1[] = {"First", "Second", "Third"};
	int	size_1 = 3;
	t_list	*list_1 = ft_list_push_strs(size_1, str_1);	
	if (list_1)
		printf("list_1 = %p, list_1->data = %s\n\n", list_1, (char *)list_1->data);
	ft_list_clear(list_1, ft_free_node_data);

	printf("Test Case 2: Single node\n");
	t_list	*list_2 = malloc(sizeof(t_list));
	list_2->data = malloc(sizeof(int));
	*(int *)list_2->data = 12345;
	list_2->next = NULL;
	ft_list_clear(list_2, ft_free_node_data);

	printf("Test Case 3: NULL free function\n");
	t_list	*list_3 = malloc(sizeof(t_list));
	ft_list_clear(list_3, NULL);

	printf("All test cases passed!\n");
}