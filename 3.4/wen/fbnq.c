# include <stdio.h>
int main()

{
    int f1 =1, f2 = 1;
    int f3 = f1 + f2;
    int i = 1;

    printf("%d %d ", f1, f2);
    i = 2;
    while(1)
    {

        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;
        i++;

        printf("%d ", f3);
        if((i%5)==0)
        {
            printf("\n");
        }

        if(i==20)
        {
            break;
        }

    }
    return 0;
}
