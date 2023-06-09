#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @n: data to insert in that new node 
 * @head: pointer to the first head in  node
 *
 * Return: pointer of nudes, Null if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
