#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void    push(t_list **begin_list, void *new_data, size_t data_size);
int     ft_list_size(t_list *begin_list);

int     main(int argc, char **argv)
{
    int     i;
    int     arr[255] = {0};
    t_list  *begin_list = NULL;

    if (argc > 1)
    {
        i = 0;
        while (i + 1 < argc)
        {
            arr[i] = atoi(argv[i + 1]);
            push(&begin_list, &arr[i], sizeof(int));
            i++;
        }
    }
    printf("size = %d\n", ft_list_size(begin_list));
    return (0);
}