# include<stdio.h>

void founction(int y);

int main()
{
    int b = 0;
    printf("Please input your nums\n");
    scanf("%d", &b);
    founction(b);
    return 0;
}

void founction(int y)
{
    int mid = y/2;

    int singal = 1;
    int space = 0;

    for (int i=0; i<=mid; i++)
    {
        space = (y-singal)/2;
        for(int j=0; j<space; j++)
        {
            printf(" ");
        }

        for(int j=0; j<singal; j++)
        {
            printf("*");
        }

        for(int j=0; j<space; j++)
        {
            printf(" ");
        }
        singal = singal+2;
        printf("\n");
    }
    singal = y-2;
    for (int i=0; i<=mid; i++)
    {   
        if(singal<=0)
            return;
        space = (y-singal)/2;
        for(int j=0; j<space; j++)
        {
            printf(" ");
        }

        for(int j=0; j<singal; j++)
        {
            printf("*");
        }

        for(int j=0; j<space; j++)
        {
            printf(" ");
        }
        singal = singal-2;
        printf("\n");
    }
}
