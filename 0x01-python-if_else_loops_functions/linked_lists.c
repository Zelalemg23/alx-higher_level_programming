#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	unsigned int node_count;

	current = h;
	node_count = 0;

	while (current != NULL)
	{
	printf("%i\n", current->n);
	current = current->next;
	node_count++;
	}

	return (node_count);
}

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the pointer of the first node of listint_t list
 * @n: integer to be included in the new node
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current_node;

	current_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	*head = new_node;
	else
	{
	while (current_node->next != NULL)
		current_node = current_node->next;
	current_node->next = new_node;
	}
	return (new_node);
}

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the list to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL)
	{
	current_node = head;
	head = head->next;
	free(current_node);
	}
}
