// 试过指针的方法来实现选择排序法
# include <stdio.h>

int main()
{
    int arr[5];
    int sz = sizeof(arr)/sizeof(arr[0]);


    for (int *i = arr; i<=arr+sz-1; i++)  
    {
        scanf("%d", i);   //此处已将arr的地址给了i,所以不需要再使用arr+i;
    }
    printf("\n");

    for (int *i=arr; i<= arr+sz-1; i++)
    {
        printf("%d", *i);
    }
    printf("\n");

    for(int *i = arr; i<arr+sz-1; i++)
    {
        int *max = i;
        for(int *j = i+1; j<arr+sz; j++)
        {
            if (*j < *(j+1))
            { 
                max = j+1;
            }    
        }
        int tmp = *max;
        *max = *i;
        *i = tmp;
    }

    for (int *i=arr; i<= arr+sz-1; i++)
    {
        printf("%d", *i);
    }
    printf("\n");

    return 0;
}