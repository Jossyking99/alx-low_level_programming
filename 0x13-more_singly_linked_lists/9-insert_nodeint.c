#include "lists.h"

/**
 * insert_nodeint_at_index - function that insert a node in a idx position
 * @head: pointer to head in function
 * @idx: index or position to be added
 * @n: node's value
 * Return: nth node data
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int nodes;
	listint_t *node_index = *head;
	listint_t *new_node, *node_after;

	if (head == NULL || *head == NULL)
		return (NULL);

	for (nodes = 0; node_index != NULL; nodes++)
		node_index = node_index->next;

	if (idx > (nodes + 1))
		return (NULL);

	node_index = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
	{
		node_after = *head;
		for (nodes = 0; nodes < (idx - 1); nodes++)
			node_index = node_index->next;
		for (nodes = 0; nodes < idx; nodes++)
			node_after = node_after->next;
		node_index->next = new_node;
		new_node->next = node_after;
		return (new_node);
	}
}
