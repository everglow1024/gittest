//乘法表：
# include<stdio.h>

void print9x9(void);

int main()
{
    print9x9();
    return 0;
}

void print9x9(void)
{
    for(int i=1; i<=9; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf(" %dX%d=%-2d", j, i, i*j);  //%-2d：右对齐

            if (i == j)
                printf("\n");
        }
    }
}