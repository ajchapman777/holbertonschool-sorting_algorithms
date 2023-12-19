#include <stdlib.h>
#include "sort.h"
/**
 * print_list - prints list of integers
 * @list: the list to be printed
 */
void print_list(const listint_t *list)
{
	int i ;

	i = 0;

	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++1;
		list = list->next;
	}
	printf("\n");
}
