# include <stdio.h>

// '''首先得掌握结构体的对齐规则：
// 1. 第一个成员在与结构体变量偏移量为0的地址处。
// 2. 其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
//         对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值。
//         VS中默认的值为8,没有对齐数，就是数据的字节大小
//         Linux中没有默认对齐数, 对齐数就是成员自身的大小
// 3. 结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍。
// 4. 如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整
// 体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍。'''
# pragma pack(2)
struct student
{
	char i;
	int roll;
	char j;
};
# pragma pack()
struct student1
{
	char i;
	char j;
    int roll;
};
# pragma pack(4)
struct student2
{
    double i;
    char j;
    int roll;
    struct student1 student1_member;  // 嵌套结构体,
};
# pragma pack()
struct S
{
    int data[1000];
    int a;
};
// 结构体传参函数；
void print(struct S s)
{
    int i = 0;
    for (i = 0; i < 3; i++) {
        printf("%d ", s.data[i]);
    }
    printf("%d\n", s.a);
}
void print2(const struct S* s)
{
    int i = 0;
    for (i = 0; i < 3; i++) {
        printf("%d ", s->data[i]);
    }
    printf("%d\n", s->a);
}

//位段
// 1. 位段的成员可以是int unsigned int signed int 或者是char （属于整形家族）类型
// 2. 位段的空间上是按照需要以4个字节（ int ）或者1个字节（ char ）的方式来开辟的。
// 3. 位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段。
// 4. 位段一般
struct s_
{   
    // 先分配四个字节的空间，
    int a: 4;
    int b: 4;
    // 之前分配的四个字节的空间，已经放不下了，所以，再分配一个字节的空间，
    int c: 31; //int > 最高32个比特位，所以，定义比特位时，不能超过32；
    // 同上，继续分配四个字节的空间；一共分配了三次整型空间；
    int d: 4;
};

int main() {
    // printf("student: %d\n", (int)sizeof(struct student));
    // printf("student1: %d\n", (int)sizeof(struct student1));
    // printf("student2: %d\n", (int)sizeof(struct student2));
    printf("s_: %d\n", (int)sizeof(struct s_));

    // printf("s: %d\n", (int)sizeof(struct s));

    struct S s = {{1,2,3},4};
    print(s);  // 传值调用；
    print2(&s); // 传址调用, 首选传址调用；

    return 0;
}