#include "ft_list.h"

int	main(void)
{
	// t_list	*list = NULL;
	// t_list	*last;

	char	**str_0 = NULL;
	int	size_0 = 0;
	t_list *list_0 = ft_list_push_strs(size_0, str_0);
	if (list_0)
		printf("list_0 = %p, list_0->data = %s\n\n", list_0, (char *)list_0->data);

	char	*str_1[] = {"First", "Second", "Third"};
	int	size_1 = 3;
	t_list *list_1 = ft_list_push_strs(size_1, str_1);
	if (list_1)
		printf("list_1 = %p, list_1->data = %s\n\n", list_1, (char *)list_1->data);

	char	**str_2 = NULL;
	int	size_2 = 3;
	t_list *list_2 = ft_list_push_strs(size_2, str_2);
	if (list_2)
		printf("list_2 = %p, list_2->data = %s\n\n", list_2, (char *)list_2->data);

	char	*str_3[] = {"Hello", NULL, "World"};
	int	size_3 = 3;
	t_list *list_3 = ft_list_push_strs(size_3, str_3);
	if (list_3)
		printf("list_3 = %p, list_3->data = %s\n\n", list_3, (char *)list_3->data);

	printf("%p\t%p\t%p\t%p\t\n", str_0, str_1, str_2, str_3);
}