# include <stdio.h>
// 用指针实现斐波那契数列
int main()
{
    int f1= 1, f2 = 1;
    int f3 = f1 + f2;
    int tmep, f4;

    int *f1p = &f1;
    int *f2p = &f2;
    int *f3p = &f3;

    int i = 2;
    printf("%d %d ", *f1p, *f2p);
    while(1)
    {

        *f1p = *f2p;
        *f2p = *f3p;
        *f3p = *f1p + *f2p;
        i++;
        printf("%d ", *f3p);
        if(i==20)
        {
            break;
        }
        else if ((i%5)==0)
        {
            printf("\n");
        }

    }
    return 0;
}