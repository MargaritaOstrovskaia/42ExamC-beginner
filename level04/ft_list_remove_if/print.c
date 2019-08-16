#include <stdio.h>
#include "ft_list.h"

void printInt(void *data)
{
    printf(" %d", *(int *)data);
}

void printList(t_list *list, void (*f)(void *))
{
    while (list != NULL)
    {
        (*f)(list->data);
        list = list->next;
    }
    printf(" \n");
}