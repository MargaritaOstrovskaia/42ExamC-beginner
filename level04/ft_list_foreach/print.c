#include <stdio.h>

void print(void *data)
{
    printf("%d\n", *(int *)data);
}