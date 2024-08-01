#include <stdio.h>
int sum(int n, int value);
int main()
{
    int n = 10;
    int value = 0;
    sum(n, value);
    return 0;
}
int sum(int n, int value)
{
    if (n == 0)
    {
        printf("%d", value);
        return 0;
    }
    value = value + n;
    n = n - 1;
    sum(n, value);
}
