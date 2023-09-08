#include "sort.h"

/**
 * insertion_sort_list - perform insertion sort on a linked list
 * @list: head node of the linked list
 **/

void insertion_sort_list(listint_t **list)
{
	if (!list || !(*list) || !((*list)->next))
		return;

	listint_t *current, *prev, *tmp;

	current = (*list)->next;

	while (current != NULL)
	{
		prev = current->prev;
		tmp = current->next;

		while (prev != NULL && prev->n > current->n)
		{
			prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = prev;

			current->next = prev;
			current->prev = prev->prev;

			if (prev->prev != NULL)
				prev->prev->next = current;
			else
				*list = current;

			prev->prev = current;

			prev = current->prev;
			print_list(*list);
		}
		current = tmp;
	}
}
