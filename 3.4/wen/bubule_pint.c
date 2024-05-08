# include <stdio.h>

int main()
{
    int arr[5];
    int a = 0, b = 0;
    int i = 0;
    int tmp = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);

    printf("%d\n",sz);

    printf("0x%x\n", *arr); //arr输出地址, 数组的名字本身就是指向数组首元素的指针;

    for (int *i = arr; i< arr+sz; i++)  //*i:表示：将i这个指针变量指向arr数组的首地址，
    {
        scanf("%d", i);
    }
    printf("\n");

    for(int *p = arr; p<arr+sz-1; p++)
    {
        for(int *s = p+1; s < arr+sz; s++)
        {
            if (*s < *p) 
            { 
                int tmp = *p;
                *p = *s;
                *s = tmp;
            }
        }
    }

    for (int *i = arr; i< arr+sz; i++)
    {
        printf("%d ", *i);
    }
    printf("\n");

    return 0;
}