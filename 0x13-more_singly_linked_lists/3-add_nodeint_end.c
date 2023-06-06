#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *neu;
	listint_t *temp = *head;

	neu = malloc(sizeof(listint_t));
	if (!neu)
		return (NULL);

	neu->n = n;
	neu->next = NULL;

	if (*head == NULL)
	{
		*head = neu;
		return (neu);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = neu;

	return (neu);
}

