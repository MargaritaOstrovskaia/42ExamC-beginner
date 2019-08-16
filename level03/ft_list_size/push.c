#include <stdlib.h>
#include "ft_list.h"

void push(t_list **begin_list, void *new_data, size_t data_size)
{
    // Allocate memory for node
    t_list *new_node = (t_list *)malloc(sizeof(t_list));

    new_node->data  = malloc(data_size);
    new_node->next = (*begin_list);

    // Copy contents of new_data to newly allocated memory.
    // Assumption: char takes 1 byte.
    size_t i;
    for (i = 0; i < data_size; i++)
        *(char *)(new_node->data + i) = *(char *)(new_data + i);

    // Change head pointer as new node is added at the beginning
    (*begin_list) = new_node;
}