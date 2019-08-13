#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list  *ft_create_elem(void *data);
int     ft_list_size(t_list *begin_list);

int     main(int argc, char **argv)
{
    int i;
    int n;
    t_list *begin_list;
    t_list *element;

    if (argc > 1)
    {
        i = 1;
        while (argv[i])
        {
            n = atoi(argv[i]);
            if (begin_list)
            {
                element = ft_create_elem(&n);
                element->next = begin_list;
                begin_list = element;
            }
            else
                begin_list = ft_create_elem(&n);
            i++;
        }
        printf("size = %d\n", ft_list_size(begin_list));
    }
    return (0);
}