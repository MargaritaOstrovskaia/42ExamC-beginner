#include <stdlib.h>
#include "ft_list.h"

int     ascending(int a, int b);
void    print(t_list *list);
void    push(t_list **begin_list, int new_data);
t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

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
            push(&begin_list, arr[i]);
            i++;
        }
    }
    print(begin_list);
    sort_list(begin_list, ascending);
    print(begin_list);
    return (0);
}