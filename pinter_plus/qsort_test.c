#include <stdio.h>
#include <stdlib.h>
// 使用qsort来理解函数指针的用法；
// 模拟qsort构建自己的排序函数：bubble_sort_test，使其实现类似的功能。
// 在比较函数内部，你需要根据你的排序规则编写代码，返回一个负数、零或正数，
// 以指示第一个参数小于、等于还是大于第二个参数

// 对于结构体的使用还不够熟悉
struct stu
{
    char name[10];
    int age;
};

int compare(const void *a, const void *b) 
{
    return (*(int*)a - *(int*)b);       // <0; 0; >0， 解引用并强制转换为对应的数据类型。
};

int compare_age(const void *a, const void *b)
{
    struct stu *stu1 = (struct stu *)a;
    struct stu *stu2 = (struct stu *)b;

    return stu1->age - stu2->age;
};

int compare_name(const void *a, const void *b)
{
    struct stu *stu1 = (struct stu *)a;
    struct stu *stu2 = (struct stu *)b;

    return stu1->age - stu2->age;
};

void Swap(void* elem1, void* elem2, int width);
void bubble_sort(int arr[], int sz);
void bubble_sort_test(void *base, size_t num, size_t size, int (*compare)(const void*, const void*));//int (void *compare )

int main()
{
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int sz = sizeof(arr) / sizeof(arr[0]);
    struct stu  s[] = {{"abd", 15}, {"fde", 22}, {"dfda", 20}};

    // qsort(s, 3, sizeof(struct stu), compare_age); // 注意：此处的compare函数指针，const void *, 在函数设计时要对参数进行重新定义（强制转换）；
    bubble_sort_test(arr, sz, sizeof(int), compare);

    printf("The results are: \n");

    for (int i = 0; i < sz; ++i)
    {
        // printf("%d ", arr[i]);
        // printf("Name: %s, Age: %d\n", s[i].name, s[i].age);
        printf("%d ", arr[i]);

    }
    printf("\n");

    return 0;
}
// 使用冒泡排序模仿qsort函数
void bubble_sort(int arr[], int sz)
{
    //外围
    int tmp;
    for(int i=0; i<sz; i++)
    {
        //两个对比
        for(int j=0; j<sz-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
        }
    }

}

void Swap(void* elem1, void* elem2, int width)
{
    char temp;
    for (size_t i = 0; i < width; i++){
        temp = *((char*)elem1 + i);
        *((char*)elem1 + i) = *((char*)elem2 + i);
        *((char*)elem2 + i) = temp;
    }
}
// int (*compare)(const void*, const void*):表示的是调用一个函数指针，int：该函数的返回值是整型，
void bubble_sort_test(void *base, size_t num, size_t size, int (*compare)(const void*, const void*)) 
{
    char* baseC = (char*) base;
    for (size_t i = 0; i < num - 1; i++) {
        for (size_t j = 0; j < num - i - 1; j++) {
            if (compare(baseC + j*size, baseC + (j+1)*size) > 0) {
                Swap(baseC + j*size, baseC + (j+1)*size, size);
            }
        }
    }
}