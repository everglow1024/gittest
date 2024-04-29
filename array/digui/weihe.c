# include<stdio.h>

// .h
int Digitsum (unsigned int x);

int main()
{
    unsigned int a = 0;
    printf("Please input your num:\n");
    scanf("%d", &a);

    printf("%d\n", Digitsum(a));
    return 0;
}

// .c
int Digitsum (unsigned int x)
{
    int sum = x%10;

    if (x/10 != 0)
        sum = sum + Digitsum(x/10);

    return sum;
}