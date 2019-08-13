#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
    int size;

    size = 0;
    t_list *temp;
    temp = begin_list;
    while (temp)
    {
        temp = temp->next;
        size++;
    }
    return (size);
}