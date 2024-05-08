# include <stdio.h>
# include <math.h>

int main()
{
    int a, b, c;
    int s;    // 定义的时候不要过早将S进行赋值，会出现随机数，同理，当出现随机数时，可以在赋值的位置分析问题。
    int area;
    printf("Please unput the lenght:\n");
    scanf("%d %d %d", &a, &b ,&c);

    if (((a+b)>c) && ((a+c)>b) && ((b+c)>a) == 1)  //&&:表示与，同时为真是才为真；||:表示有一个为真时，为真。
    {
        printf("the input is legal\n");
    }
    else 
    {
        printf("error\n");
        return 0;
    }
    s = (a+b+c) / 2;
    int temp = s * (s-a) * (s-b) * (s-c);

    area = sqrt(temp);

    printf("The area is: %d\n", area);

    return 0;
}