#include "ft_list.h"
void	ft_print_list(t_list *head) 
{
    while (head) {
        printf("%s -> ", (char *)head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int	main(void)
{
	// t_list	*list_0 = NULL;

	char	*str_1[] = {"First", "Second", "Third", "Fourth", "Fifth", 
		"Sixth", "Seventh", "Eighth", "Ninth", "Tenth"};
	int	size_1 = 10;
	t_list *list_1 = ft_list_push_strs(size_1, str_1);

	ft_print_list(list_1);
	ft_list_reverse(&list_1);
	ft_print_list(list_1);
}