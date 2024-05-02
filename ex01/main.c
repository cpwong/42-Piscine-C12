#include "ft_list.h"

int main() {
	// Test Case 1: Empty List
	t_list	*list_0 = NULL;
	ft_list_push_front(&list_0, "Test Data 1");
	if (list_0 == NULL || list_0->data == NULL || strcmp(list_0->data, "Test Data 1") != 0) 
	{
		printf("Test Case 1 failed: Element not added correctly.\n\n");
	} 
	else 
	{
		printf("Test Case 1 passed.\n\n");
	}

	// Test Case 2: Push new element into exisiting list
	ft_list_push_front(&list_0, "Test Data 2");
	if (list_0 == NULL || list_0->data == NULL || strcmp(list_0->data, "Test Data 2") != 0) 
	{
		printf("list_0->data = %s\n", (char *)list_0->data);
		printf("Test Case 2 failed: Element not inserted at the front.\n\n");
	} 
	else 
	{
		printf("Test Case 2 passed.\n\n");
	}

	// Test Case 3: Null Data
	t_list	*list_2 = NULL;
	ft_list_push_front(&list_2, NULL);
	return (0);
}