// c++函数断点
//
#include <stdio.h>

class Test {
public:
    void add(int m, int n);
};

void Test::add(int m, int n)
{
    printf("m + n = %d\n", m + n);
}

int main()
{
    Test test;

    test.add(1,1);
    return 0;
}
