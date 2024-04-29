// 测试游戏的逻辑
# include "game.h"

void print(void)
{
    printf("***************************************\n");
    printf("********* 0、Begin  1、End  ***********\n");
    printf("***************************************\n");
}

void game (void)
{
    int win_flag = 0;
    char res;
    printf("Begin the game:\n");
    char broad[ROW][COL] = {0};

    intinalbroad(broad, ROW, COL);
    showbroad(broad, ROW, COL);

    while(win_flag==0)
    {
        wanjia(broad);
        showbroad(broad, ROW, COL);
        res = win(broad, ROW, COL, win_flag);

        if(res == '*' || res == '#')
        {
            break;
        }
        else if(res=='-')
        {
            printf("pinju!\n");
            break;
        }

        computer(broad);
        showbroad(broad, ROW, COL);
        win(broad, ROW, COL, win_flag);
        if(res == '*' || res == '#')
        {
            printf("The game is end!\n");
            break;
        }
        else if(res=='-')
        {
            printf("pinju!\n");
            break;
        }
    }

}

int main()
{
    int choice = 0;
    do
    {
        print();
        scanf("%d", &choice);
        switch (choice)
        {

            case 0:
                game();
                break;

            case 1:
                printf("The game is end!\n");
                break;

            default:
                printf("The input is ero!\n");
                break;

        }

    }while(choice==0);

    return 0;
}