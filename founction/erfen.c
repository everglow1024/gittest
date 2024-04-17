# include <stdio.h>

int chazhao(int x);
int chazhao_p(int x);

int main()
{
    int a = 0;

    printf("Please input your num: \n");
    scanf("%d", &a);
    //  printf("logic:%d\n", (-1 && -1));  // 所有非零值在条件语句中都被视为true
    if(chazhao(a) >= 0)
    {

        printf("普通方法: %d\n", chazhao(a));
        printf("指针方法: %d\n", chazhao_p(a));
    }
    else 
    {
        printf("Have no num, er!\n");
    }
    return 0;
}
//  普通方法：
int chazhao(int x) 
{
    int arr[] = {1, 4, 7, 8, 9};
    int tmp = -1; 
    int sz = sizeof(arr) / sizeof(arr[0]);

    int left = 0, right = sz - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            tmp = mid; 
            break;
        } else if (arr[mid] < x) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }

    return tmp;
}

// 指针方法：
int chazhao_p(int x)
{
    int arr[] = {1, 4, 7, 8, 9};
    int sz = sizeof(arr) / sizeof(arr[0]);
    
    int *left = arr;
    int *right = &arr[sz-1];
    int *mid;
    int tmp = -1;
    while(left<=right)
    {
        mid = left + (right - left) / 2;
        if (x == *mid)
        {
            tmp = *mid;
            break;
        }
        else if (x<*mid)
        {
            right = mid-1;  
        }
        else if(x>*mid)
        {
            left = mid+1;
        }
    }
    return tmp;
}