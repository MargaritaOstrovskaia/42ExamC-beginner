#include <stdlib.h>
#include "ft_list.h"

void push(t_list **begin_list, int new_data)
{
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    new_node->data  = new_data;
    new_node->next = (*begin_list);
    (*begin_list) = new_node;
}