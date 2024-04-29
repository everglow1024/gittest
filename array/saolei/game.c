# include <stdio.h>
# include "game.h"
# include <time.h>
# include <stdlib.h>

// 对于void类型的函数，也可以使用return ; 执行直接跳出函数的操作；

void game(void)
{
    char space[11][11];
    char mask[11][11];
    int end_flag = 0;
    int mine_num = 80;

    space_intial(space, 9, 9); //初始化棋盘和掩码棋盘，“0”
    mask_intial(mask, 9, 9);
    space_mine(space, 9, 9, &mine_num); //增加雷；
    
    space_show(space, 9, 9);

    while(end_flag==0)
    {
        play(space, mask, &end_flag, &mine_num);

        if(end_flag==1)
        {
            show_results(space, mask, 9, 9);
            break;
        }
        space_show(mask, 9, 9);
    }
    printf("The game is ended!\n");
}

void space_intial(char space[][11], int x, int y)
{
    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=y; j++)
        {
            space[i][j] = '0';
        }
    }
}

void mask_intial(char mask[][11], int x, int y)
{
    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=y; j++)
        {
            mask[i][j] = '*';
        }
    }
}

void space_mine(char space[][11], int x, int y, int *nums) 
{
    srand(time(NULL)); // 使用当前时间作为随机种子

    int placed_mines = 0;

    while (placed_mines < *nums) {
        int rand_row = rand() % x + 1; // 保证mine的坐标在9x9的数格中；
        int rand_col = rand() % y + 1; 

        if (space[rand_row][rand_col] != '1') {
            space[rand_row][rand_col] = '1';
            placed_mines++;
        }
    }
}

void play(char space[][11], char mask[][11], int *end_flag, int *mine_num)
{
    int mine = 0;
    int a = 0, b = 0;
    int all_mine = 0;

    while(mask[a][b] != '*' )
    {
        printf("Please input anther location!\n");
        printf("Player:>_ _\n");
        scanf("%d %d", &a, &b);
    }
        
    if (space[a][b]=='1')
    {
        printf("on the mine!\n");
        *end_flag = 1;
        return;
    }
    else if (1)
    {
        for(int i=1; i<=9; i++)
        {
            for(int j=1; j<=9; j++)
            {
            if (mask[i][j]=='*')
            {
                all_mine++;
                if (all_mine == *mine_num)
                {
                    printf("You win!\n");
                    *end_flag = 1;
                    return;
                }
            }
            }
        }
    }
    else 
    {
        for(int i=a-1; i<=a+1; i++)
        {
            for(int j=b-1; j<=b+1; j++)
            {
                if (space[i][j] == '1')
                    mine++;

                if (space[i][j] == '0')
                    mask[i][j] = ' ';
            }
        }
    }
    mask[a][b] = '0' + mine;
}

void space_show(char space[][11], int x, int y)
{
    for(int j=0; j<=y; j++)
    {
        printf("%d ", j);
    }
    printf("\n");

    for(int i=1; i<=x; i++)
    {
        printf("%d ", i);
        for(int j=1; j<=y; j++)
        {
            
            printf("%c ", space[i][j]);
        }
        printf("\n");
    }
}

void show_results(char space[][11], char mask[][11], int x, int y)
{
    for(int j=0; j<=y; j++)
    {
        printf("%d ", j);
    }
    printf("\n");

    for(int i=1; i<=x; i++)
    {
        printf("%d ", i);
        for(int j=1; j<=y; j++)
        {
            if (space[i][j] == '1')
                mask[i][j] = '*';

            if (space[i][j] == '0')
                mask[i][j] = ' ';
            printf("%c ", mask[i][j]);
        }
        printf("\n");
    }
}
