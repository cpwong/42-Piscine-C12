#include "ft_list.h"

int	main(void)
{
	t_list	*temp;
	char	*str;

	t_list	*list_0 = NULL;
	char	*str_1[] = {"First", "Second", "Third", "Fourth", "Fifth", 
		"Sixth", "Seventh", "Eighth", "Ninth", "Tenth"};
	int	size_1 = 10;
	t_list *list_1 = ft_list_push_strs(size_1, str_1);

	printf("\nTest Case 0: Empty list, at position 0\n");
	temp = ft_list_at(list_0, 0);
	str = temp ? (char *)temp->data : NULL;
	printf("Return = %p, %s\n\n", temp, str);

	printf("Test Case 1: Empty list, at position 3\n");
	temp = ft_list_at(list_0, 3);
	str = temp ? (char *)temp->data : NULL;
	printf("Return = %p, %s\n\n", temp, str);

	printf("Test Case 2: Filled list, at position 0\n");
	temp = ft_list_at(list_1, 0);
	str = temp ? (char *)temp->data : NULL;
	printf("Return = %p, %s\n\n", temp, str);

	printf("Test Case 3: Filled list, at position 5\n");
	temp = ft_list_at(list_1, 5);
	str = temp ? (char *)temp->data : NULL;
	printf("Return = %p, %s\n\n", temp, str);

	printf("All test cases passed!\n");
}