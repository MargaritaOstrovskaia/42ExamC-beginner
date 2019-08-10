#include <stdio.h>
#include <stdlib.h>

int max(int* tab, unsigned int len);

int main (int argc, char **argv)
{
    int i;
    int n;
    int arr[255];
    if (argc >= 1)
    {
        i = 1;
        while (i < argc)
        {
            n = atoi(argv[i]);
            arr[i - 1] = n;
            i++;
        }
        printf("max = %d\n", max (arr, argc - 1));
    }
    return (0);
}