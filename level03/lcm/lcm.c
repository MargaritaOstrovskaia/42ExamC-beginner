unsigned int    hcf(unsigned int a, unsigned int b)
{
    if (b == 0)
        return (a);
    return (hcf(b, a % b));
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int g;
    unsigned int m;

    g = hcf(a, b);
    m = a * b;
    if (m == 0)
        return (0);
    if (m < 0)
        m = -m;
    return (m / g);
}