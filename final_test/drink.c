# include<stdio.h>

void founction(int x);

int main()
{
    int a = 0;
    printf("Please input your nums\n");
    scanf("%d", &a);
    founction(a);
    return 0;
}

void founction(int x)
{
    int y = x;

    while(x>=2)
    {
        y = y + (x/2);
        x = x/2 + x%2;
    }
    printf("%d\n", y);
}