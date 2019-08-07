#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *i;
    t_list *temp;

    while (*begin_list && !cmp(begin_list->data, data_ref))
    {
        temp = *begin_list;
        *begin_list = (*temp)->next;
        free(temp);
    }
    i = *begin_list;
    while (i && i->next)
    {
        if (!cmp(i->data, data_ref))
        {
            temp = i->next;
            i->next = temp->next;
            free(temp);
        }
        if (i->next)
        i = i->next;
    }
}