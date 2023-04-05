#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a certain index in a linked list
 * @head: a pointer to a pointer to the first struct in a linked list
 * @index: the index at which to delete the node
 * Return: 1 if SUCCESS or -1 if FAIL
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *temp2;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		if (*head != NULL)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
			return (1);
		}
	}
	else
	{
		temp = *head;
		for (i = 0; temp && (i < index - 1); i++, temp = temp->next)
			;
		if (temp != NULL)
		{
			temp2 = temp;
			temp = temp->next;
			temp2->next = temp->next;
			free(temp);
		}
		else
			return (-1);
	}
	return (1);
}

