# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "contact.h"

void print_init()
{
    printf("*****************************************************\n");
    printf("* 1.add 2.delete 3.search 4.modify 5.sort 6.display *\n");
    printf("********** name sex phone_bumber address age ********\n");
    printf("********************** 7.end ************************\n");
}

int main ()
{
    struct contacter c[NUM] = {0};  //初始化
    int input=0;
    int continue_flag = 1;

    do
    {
        print_init();
        printf("please input your choice: \n");
        scanf("%d", &input);

        switch(input)
        {
            case 1:
                add(c);
                display(c);
                break;
            case 2:
                delete_(c);
                display(c);
                break;
            case 3:
                search(c);
                break;
            case 4:
                modify(c);
                display(c);
                break;
            case 5:
                sort(c);
                display(c);
                break;
            case 6:
                display(c);
                break;
            case 7:
                continue_flag = 0;
                break;
            default:
                printf("error");
                break;
        }
    }while(continue_flag == 1);
    display(c);
    printf("end");
    return 0;
}

