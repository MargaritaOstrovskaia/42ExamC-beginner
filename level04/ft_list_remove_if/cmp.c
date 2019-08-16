int cmp(void *data_a, void *data_b)
{
    const int * a_int_ptr = (const int *)data_a;
    const int * b_int_ptr = (const int *)data_b;

    int a_value = *a_int_ptr;
    int b_value = *b_int_ptr;

    return a_value - b_value;
}