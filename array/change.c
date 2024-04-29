#include<stdio.h>

void change(char **x, char **y);

int main()
{
    char a[] = "123456";
    char b[] = "abcdef";

    change(&a, &b);

    printf("%s\n", a);
    printf("%s\n", b);

    return 0;
}

void change(char **x, char **y)
{
    char *tmp;

    tmp = *x;
    *x = *y;
    *y = tmp;
}
