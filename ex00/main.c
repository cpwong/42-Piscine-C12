#include "ft_list.h"

void ft_print_hello(void)
{
	printf("Hello World!\n");
}

int main(void)
{
	t_list	*my_list = NULL;
	void 	*my_data = NULL;

	my_data = (void *)ft_print_hello;
	my_list = ft_create_elem(my_data);
	printf("my_data = %p\n", my_data);
	printf("t_list = %p\n", my_list);
}