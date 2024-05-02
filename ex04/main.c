#include "ft_list.h"

int	main(void)
{
	t_list	*list = NULL;
	t_list	*last;

	ft_list_push_front(&list, "Test Data 1");
	ft_list_push_front(&list, "Test Data 2");
	ft_list_push_front(&list, "Test Data 3");
	ft_list_push_front(&list, "Test Data 4");
	ft_list_push_front(&list, "Test Data 5");

	last = ft_list_last(list);
	printf("Last element = %p, data = %s\n", last, (char *)last->data);

	ft_list_push_back(&list, "Test Data 6");

	last = ft_list_last(list);
	printf("Last element = %p, data = %s\n", last, (char *)last->data);

}