#include "sort.h"

/**
 * insertion_sort_list - sorts an array of numbers in ascending order
 * 
 * @list: doubly linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *point, *temp;

	if (!list)
		return;

	point = *list;

	while (point)
	{
		while (point->next && (point->n > point->next->n))
		{
			temp = point->next;
			point->next = temp->next;
			temp->prev = point->prev;

			if (point->prev)
				point->prev->next = temp;

			if (temp->next)
				temp->next->prev = point;

			point->prev = temp;
			temp->next = point;

			if (temp->prev)
				point = temp->prev;
			else
				*list = temp;

			print_list(*list);
		}
		point = point->next;
	}
}
