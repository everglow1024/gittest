// 游戏代码的实现；
# include <stdio.h>
# include "game.h"

//三子棋总结，涉及知识点，.h .c 文件之间的调用关系； makefile的链接；二维数组传参； 
//在.c文件中，对函数进行定义的时候，传入一个二维的数组，需要至少给出一个参数（每行的个数[*][x]）
//define的使用方法； 

// 棋盘初始化
void intinalbroad (char broad[ROW][COL], int row, int col)
{
    for (int i = 0; i < row; i++ )
    {
        for (int j = 0; j < col; j++)
        {
            broad[i][j] = ' ';
        }
    }
}

// 打印棋盘
void showbroad(char broad[ROW][COL], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            {
                printf(" %c ", broad[i][j]);
                if(j<col-1)
                    printf("|");
            }
            printf("\n");

        if(i<row-1)
        {
            for (int j = 0; j < col; j++)
                {
                    printf("---");
                    if (j<col-1)
                        printf("|");
                }
        printf("\n");
        }

    }
}

// 玩家下棋
void wanjia(char broad[ROW][COL]) 
{
    int x = 0, y = 0;
    printf("wanjia:>");
    scanf("%d %d", &x, &y);

    if(x>COL || y>ROW)
    {
        printf("Eor! Please input again!\n");
        scanf("%d %d", &x, &y);
    }

    broad[x-1][y-1] = '*';
}

// 电脑随机下棋
void computer(char broad[ROW][COL])
{
    int x = 0, y = 0;
    printf("computer:>");

    scanf("%d %d", &x, &y);

    broad[x-1][y-1] = '#';
}

char win(char broad[ROW][COL], int row, int col, int win_flag)
{
    int customer_flag = 1, computer_flag = 1, kong = 1; 

    win_flag = 0;

    for(int i = 0; i< row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            
            if (broad[i][j] == '*')
            {
                customer_flag = i + j;
            } 

            if (broad[i][j] == '#')
            {
                computer_flag = i + j;
            } 

            if(broad[i][j] == ' ')
            {
                kong++;
            }

        }
        
    }
    printf("%d\n", customer_flag);
    printf("%d\n", computer_flag);

    // 判断是否使用满足胜利条件；
    
    if (customer_flag==4 || customer_flag==6 || customer_flag==9)  // || 表示或者
    {
        printf("customer win!\n");
        win_flag = 1;
        return '*';
    }
    else if (computer_flag==4 || computer_flag==6 || computer_flag==9)
    {
        printf("computer win!\n");
        win_flag = 1;
        return '#';
    }

    else if (kong == 0)
    {
        return '-';
    }


}