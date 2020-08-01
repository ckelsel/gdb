#include <stdio.h>

void test(int x)
{
    printf("x = %d\n", x);
}

int main()
{
    printf("hello world\n");

    test(10);
    return 0;
}
