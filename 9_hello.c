#include <stdio.h>

void test()
{
    for (int i = 0; i < 100; i++)
    {
        printf("%d, test\n", i);
    }
}

int main()
{
    test();
    return 0;
}
