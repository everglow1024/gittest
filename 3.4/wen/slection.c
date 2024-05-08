# include<stdio.h>
// 单次循环中需要找出最大或者最小值；
int main()
{
    int arr[5];
    int i = 0, j = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    int max = 0, mid = 1;

    printf("Pease input your nums(10) \n");

    for (int i = 0; i < sz; i++) 
    {
        scanf("%d", &arr[i]); 
    }

    printf("Your nums are: \n");

    for (int i = 0; i< sz; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < sz; i++)
    {
        int maxIndex = i;

        for (int j = i + 1; j < sz; j++)
        {
            if (arr[j] > arr[maxIndex])
            {
                maxIndex = j;
            }
        }
        
        // Swap arr[i] and arr[maxIndex]
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }

    printf("\nThe results : \n");
    for (int i=0; i<sz; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}