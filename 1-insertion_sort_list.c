#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list
 * @list: Dobule linked list to sort
 * Return: void.
 */
void insertion_sort_list(listint_t **list)
{
listint_t *node;
if (list == NULL || (*list)->next == NULL)
{
return;
}
node = (*list)->next;
while (node)
{
while ((node->prev) && (node->prev->n > node->n))
{
node = swap(node, list);
print_list(*list);
}
node = node->next;
}
}
