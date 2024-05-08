# include <stdio.h>
# include <stdlib.h>

int main ()
{
    int hang = 5;
    int num = 5;

    for(int i=1; i<=hang; i++)
    {
        for(int n=1; n<=num-i; n++)
        {
            printf(" ");
        }
        for(int j=1; j<=((2*i)-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(int i=4; i>=1; i--)
    {
        for(int n=1; n<=num-i; n++)
        {
            printf(" ");
        }
        for(int j=1; j<=((2*i)-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}