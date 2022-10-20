#include "lists.h"
int string_length_recursion(char *s);
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the first element of the list.
 * @str: string to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *aux = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = string_length_recursion(new->str);
	new->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		aux->next = new;
	}
	else
		*head = new;

	return (new);
}
/**
 * string_length_recursion - returns the length of a string.
 * @s: string.
 * Return: length of @s.
 */
int string_length_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + string_length_recursion(s + 1));
}
