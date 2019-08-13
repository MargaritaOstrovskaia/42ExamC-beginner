#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end);
int get_count(int start, int end);

int main(int argc, char **argv)
{
    int a;
    int b;
    int count;
    int *arr;

    if (argc == 3)
    {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        arr = ft_range(a, b);
        count = get_count(a, b);
        for (int i = 0; i < count; i++)
            printf("%d ", arr[i]);
    }
    printf(" \n");
    return (0);
}