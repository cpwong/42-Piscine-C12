#include "ft_list.h"

void	ft_print_list(t_list *head) 
{
    while (head) {
        printf("%s -> ", (char *)head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void	ft_putstr(void *data)
{
	printf("\tdata = %s\n", (char *)data);
}

int	main(void)
{

	char	*str_1[] = {"First", "Second", "Third", "Fourth", "Fifth", 
		"Sixth", "Seventh", "Eighth", "Ninth", "Tenth"};
	int	size_1 = 10;
	t_list *list_1 = ft_list_push_strs(size_1, str_1);

	printf("Found address = %p\n", ft_list_find(list_1, "First", strcmp));
	printf("Found address = %p\n", ft_list_find(list_1, "Fifth", strcmp));
	printf("Found address = %p\n", ft_list_find(list_1, "Tenth", strcmp));
	printf("Found address = %p\n", ft_list_find(list_1, "HELLO", strcmp));
}