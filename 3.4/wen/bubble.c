# include <stdio.h>

int main()
{
    int arr[5];
    int sz = sizeof(arr) / sizeof(arr[0]);    //固定用法
    printf("Pease input your nums(10) \n");

    for (int i = 0; i < sz; i++) {
        scanf("%d", &arr[i]); 
    }

    printf("Your nums are: \n");
    for (int i = 0; i< sz; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int t = 0; t < sz - 1; t++) {  

        for (int j = 0; j < sz - 1 - t; j++) { 
            if (arr[j] > arr[j+1]) {
                int mid = arr[j+1];     // 使用临时变量
                arr[j+1] = arr[j];
                arr[j] = mid;
            }
        }
    }
    printf("\nThe results : \n");
    for (int i=0; i<sz; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}