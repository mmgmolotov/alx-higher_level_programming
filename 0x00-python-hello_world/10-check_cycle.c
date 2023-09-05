#include "lists.h"
/**
 * check_cycle - function in C that checks if
 * a singly linked list has a cycle in it
 * @list: linked list to check
 * Return 1 otherwise 0
 */
int check_cycle(listint_t *list)
{
	listint_t *s = list;
	listint_t *f =list;
	
	if (!list)
	{
		return (0);
	}
	while (s && f && f->next)
	{
		s = s->next;
		f = f->next->next;
		if(s == f)
			return (1);
	}
	return (0);
}
