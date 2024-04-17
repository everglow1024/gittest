#include<stdio.h>

int isLeapYear();
int main() 
{
    int a;
    printf("Please input the years: ");
    scanf("%d",&a);
    if (isLeapYear(a))
    {
        printf("Yse!\n");
    }
    else
    {
        printf("No!\n");
    }
    return 0;
}

int isLeapYear(int year) {

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; 
    } else {
        return 0; 
    }
}