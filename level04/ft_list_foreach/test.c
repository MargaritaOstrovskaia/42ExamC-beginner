#include <stdlib.h>
#include "ft_list.h"

void    print(void *data);
void    push(t_list **begin_list, void *new_data, size_t data_size);
void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

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
        ft_list_foreach(begin_list, print);
    }
    return (0);
}