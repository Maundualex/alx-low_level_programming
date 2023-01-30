#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free single list link
 * @head: pointer to the first node of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

