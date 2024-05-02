#include "ft_list.h"

int	main(void)
{
	t_list	*list = NULL;
	ft_list_push_front(&list, "Test Data 1");
	ft_list_push_front(&list, "Test Data 2");
	ft_list_push_front(&list, "Test Data 3");
	ft_list_push_front(&list, "Test Data 4");
	ft_list_push_front(&list, "Test Data 5");

	printf("Total size = %d\n", ft_list_size(list));
	
	t_list	*last = ft_list_last(list);
	printf("Last element = %p, data = %s\n", last, (char *)last->data);
}