#include <stdio.h>

struct student {
    char name[32];
    int id;
};

int main()
{
    int i = 10;
    char *str = "abc";

    struct student stu;

    struct student *p_stu = &stu;

    return 0;
}
