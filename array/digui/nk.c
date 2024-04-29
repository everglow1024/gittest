# include<stdio.h>

// .h
double nk(int x, int y);

int main()
{
    int k = 0, n = 0;
    printf("Please input your num:\n");
    scanf("%d %d", &n, &k);

    printf("%lf\n", nk(n, k));

    return 0;
}
//.c
double nk(int x, int y)
{
    if(y>0)
        return x * nk(x, y-1);
    else if (y==0)
        return 1;
    else 
        return 1.0 / nk(x, -y);
    return res;
}