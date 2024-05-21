# include <stdio.h>
# include "contact.h"
# include <string.h>

// 添加联系人
void add(struct contacter c[NUM]) 
{
    int i = 0;
    struct contacter new_contact;

    // 读取新的联系人信息
    printf("请输入联系人的信息：\n");
    printf("name sex phone address age\n");
    scanf("%s %s %s %s %d", new_contact.name, new_contact.sex, new_contact.phone, new_contact.address, &new_contact.age);

    // 检查是否存在重复联系人
    for (i = 0; i < NUM; i++) {
        if (strcmp(c[i].name, new_contact.name) == 0 && strlen(c[i].name) != 0) {
            printf("联系人已存在，请重新输入！\n");
            printf("name sex phone address age\n");
            scanf("%s %s %s %s %d", new_contact.name, new_contact.sex, new_contact.phone, new_contact.address, &new_contact.age);
            // 重新从头检查
            i = -1; // 重新检查整个数组
        }
    }
    // 找到空位并插入新联系人
    for (i = 0; i < NUM; i++) {
        if (strlen(c[i].name) == 0) 
        { // 找到空位
            strcpy(c[i].name, new_contact.name);
            strcpy(c[i].sex, new_contact.sex);
            strcpy(c[i].phone, new_contact.phone);
            strcpy(c[i].address, new_contact.address);
            c[i].age = new_contact.age;
            printf("联系人已添加到第%d位\n", i + 1);
            return;
        }
    }
    // 如果没有空位
    printf("通讯录已满，无法添加新的联系人。\n");
}
//删除联系人
void delete_(struct contacter c[NUM]) {
    char target_name[NAME_LEN];
    int i;

    printf("请输入要删除的联系人姓名：");
    scanf("%s", target_name);

    for(i = 0; i < NUM; i++) {
        if(strcmp(c[i].name, target_name) == 0) 
        {
            memset(&c[i], 0, sizeof(struct contacter));
            printf("联系人 %s 已删除。\n", target_name);
            return; 
        }
    }
    printf("未找到联系人 %s。\n", target_name);
}
//查找联系人
void search(struct contacter c[NUM])
{
    int i;
    char target_name[NAME_LEN];
    printf("请输入要查询的联系人姓名：");
    scanf("%s",target_name);

    for(i=0;i<NUM;i++)
    {
        if(strcmp(c[i].name, target_name) ==0)
        {
            printf("查询结果如下:\n");
            printf("%s %s %s %s %d\n",c[i].name,c[i].sex,c[i].phone,c[i].address,c[i].age);
            return;
        }
    }
    printf("未找到联系人 %s。\n", target_name);
}
// 修改联系人信息
void modify(struct contacter c[NUM])
{
    int i;
    char target_name[NAME_LEN];

    printf("请输入要修改的联系人姓名：\n");
    scanf("%s",target_name);

    for(i=0;i<NUM;i++)
    {
        if(strcmp(c[i].name, target_name) ==0)
        {
            printf("请输入新的联系人信息：");
            scanf("%s %s %s %s %d",c[i].name,c[i].sex,c[i].phone,c[i].address,&c[i].age);
            return;
        }
    }
    printf("打算修改的联系人不存在！\n");
}
// 显示联系人
void display(struct contacter c[NUM])
{
    printf("--------------------------\n");
    printf("name sex phone address age\n");
    int i;
    for (i = 0; i < NUM; i++)
    {
        if(strlen(c[i].name)!=0)
            printf("%s %s %s %s %d___%d \n",c[i].name,c[i].sex,c[i].phone,c[i].address,c[i].age, i);
    }
}
// 排序联系人
// void sort(struct contacter c[NUM])
// {
//     int i,j;
//     struct contacter temp;
//     for(i=0;i<NUM;i++)
//     {
//         for(j=0;j<NUM-i-1;j++)
//         {
//             if(strcmp(c[j].name, c[j+1].name)>0) //根据姓名排序
//             {
//                 temp=c[j];
//                 c[j]=c[j+1];
//                 c[j+1]=temp;
//             }
//         }
//     }
// }

int compare_up(const void *a, const void *b)
{
    struct contacter *stu1 = (struct contacter *)a;
    struct contacter *stu2 = (struct contacter *)b;
    return strcmp(stu1->name, stu2->name);  //升序
};

int compare_down(const void *a, const void *b)
{
    struct contacter *stu1 = (struct contacter *)a;
    struct contacter *stu2 = (struct contacter *)b;
    return strcmp(stu2->name, stu1->name);  //降序
};

void sort(struct contacter c[NUM])
{
    // 用函数qsort实现
    int i=1;
    printf("请选择你的排序方式\n");
    printf("升序:1\n 降序:2\n");
    scanf("%d", &i);
    if (i == 1)
    {
        qsort(c, NUM, sizeof(struct contacter), compare_up);
        return;
    }
    else if (i == 2)
    {
        qsort(c, NUM, sizeof(struct contacter), compare_down);
        return;
    }
}
// 在 qsort 函数中，如果比较函数 compare 返回负值，
// 那么 qsort 将会把 stu1 排在 stu2 前面；如果返回正值，那么 stu1 将会排在 stu2 后面。