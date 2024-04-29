# include <stdio.h>

int max(int *arr);

int main()
{
    int arr[10];

    printf("Please input your nums: \n");

    for (int *i=arr; i<arr+10; i++)
    {
        scanf("%d", i);
    }

    for (int *i=arr; i<arr+10; i++)
    {
        printf("%d ", *i);
    }

    printf("\n");

    printf("The max num is: %d", max(arr));

    return 0;
}

int max(int *arr)
{
    int *max_index = arr;

    for(int *i=arr; i<arr+10; i++)
    {
        if(*i >= *max_index)
            max_index = i;
    }
    return *max_index;
}