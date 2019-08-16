#include "ft_list.h"

void    swap(t_list *list1, t_list *list2)
{
    int val = list1->data;
    list1->data = list2->data;
    list2->data = val;
}

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

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
    int     i;
    int     j;
    int     size;
    t_list  *list1;
    t_list  *list2;

    size = ft_list_size(lst);
    i = 0;
    list1 = lst;
    while (list1 && i < size - 1)
    {
        j = 0;
        list2 = lst;
        while (list2 && j < size - 1 - i)
        {
            if (cmp(list2->next->data, list2->data))
                swap(list2, list2->next);
            j++;
            list2 = list2->next;
        }
        i++;
        list1 = list1->next;
    }
    return (lst);
}