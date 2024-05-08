# include <stdio.h>

int main()
{
    int arr[10]={0,1,2,3}, arr2[10]={1,2,3,4}, arr3[10]={2,3,4,5};
    int* p = arr, *p1 = arr2, *p2 = arr3;
    int* arr_[3];

    arr_[0] =  p;
    arr_[1] =  p1;
    arr_[2] =  p2;

    printf("%d\n", arr_[0][0]);

    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<4; j++)
        {
            printf("%d", arr_[i][j]);
        }
        printf("\n");
    }
    return 0;
}