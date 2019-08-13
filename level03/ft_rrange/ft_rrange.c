#include <stdlib.h>

int get_count(int start, int end)
{
    int temp;
    int count;

    if (start > end)
    {
        temp = start;
        start = end;
        end = temp;
    }
    count = end - start + 1;
    return (count);
}

int     *ft_rrange(int start, int end)
{
    int i;
    int size;
    int *nums;

    size = get_count(start, end);
    nums = (int*)malloc(sizeof(int) * size);
    i = 0;
    while (i < size)
    {
        if (start <= end)
            nums[i] = end - i;
        else
            nums[i] = end + i;
        i++;
    }
    return (nums);
}

