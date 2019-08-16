#include <stdlib.h>
#include "ft_list.h"

int     cmp(void *data_a, void *data_b);
void    push(t_list **begin_list, void *new_data, size_t data_size);
void    printInt(void *data);
void    printList(t_list *list, void (*f)(void *));
void    ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

int     main(int argc, char **argv)
{
    int     i;
    void    *data_ref;
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

        data_ref = malloc(sizeof(int));
        *(int *)data_ref = 2;

        printList(begin_list, printInt);
        ft_list_remove_if(&begin_list, data_ref, cmp);
        printList(begin_list, printInt);
    }
    return (0);
}