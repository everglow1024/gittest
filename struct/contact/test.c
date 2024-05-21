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

enum Opration  //
{
    ADD=1,
    DELETE,
    SEARCH,
    MODIFY,
    SORT,
    DISPALY,
    END
};

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
            case ADD:
                add(c);
                display(c);
                break;
            case DELETE:
                delete_(c);
                display(c);
                break;
            case SEARCH:
                search(c);
                break;
            case MODIFY:
                modify(c);
                display(c);
                break;
            case SORT:
                sort(c);
                display(c);
                break;
            case DISPALY:
                display(c);
                break;
            case END:
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

