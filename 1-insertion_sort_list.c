#include "sort.h"
/**
 * insertion_sort_list - is used to sort a doubly linked list
 * @list: is the pointer of the list to be sorted
 * return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *nex, *per;

	if (list == NULL || *list == NULL)
		return;

	tmp = *list;
	while ((tmp = tmp->next))
	{
		nex = tmp;
		while (nex->prev && nex->n < nex->prev->n)
		{
			per = nex->prev;
			if (nex->next)
				nex->next->prev = per;
			if (per->prev)
				per->prev->next = nex;
			else
				*list = nex;
			per->next = nex->next;
			nex->prev = per->prev;
			nex->next = per;
			per->prev = nex;

			print_list(*list);
		}
	}
}
