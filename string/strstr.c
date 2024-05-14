/* strstr example */
#include <stdio.h>
#include <string.h>

char * my_strstr(const char* str1, const char* str2)
{
    
}

int main ()
{
    char str[] ="This is a simple string";
    char * pch;
    pch = strstr (str,"simple"); //找到simple所在字符串中的起始地址；
    strncpy (pch,"sample",6);   //进行替换；
    puts (str);  //只可以输出字符串；
    return 0;
}