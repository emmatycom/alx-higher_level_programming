#include "lists.h"

/**
* check_cycle - checks for loops in a singly listed link
* @list: pointer to singly linked list
*
* Return: 0 cycle does not exists, 1 cycle exists
*/

int check_cycle(listint_t *list)
{
	listint_t *fast = list;
	listint_t *slow = list;

	while (fast && slow && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if(fast == slow)
			return 1;
	}
return 0;
}
