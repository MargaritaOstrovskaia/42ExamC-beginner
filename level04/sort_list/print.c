#include <stdio.h>
#include "ft_list.h"

void print(t_list *list)
{
    while (list != NULL)
    {
        printf("%d ", list->data);
        list = list->next;
    }
    printf(" \n");
}