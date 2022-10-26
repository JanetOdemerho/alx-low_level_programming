#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to the head of linked list
 * Return: n as head node's data or 0 if empty list
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;

	if (temp == NULL)
		return (0);

	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
