# include <stdio.h>
# include <string.h>

int main()
{
    char arr1[] = "#########";
    char arr2[] = "123456789";

    int left = 0;
    // int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
    int right = strlen(arr1) - 1;

    printf("%s\n", arr1);

    for(int i = 0; i<=(right); i++)
    {
        arr1[i]=arr2[left];
        
        arr1[(right)] = arr2[(right)];

        left++;
        right--;

        printf("%s\n",arr1);
    }

    return 0;
}