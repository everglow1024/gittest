// 游戏代码的申明；
# include <stdio.h>

#define ROW 3
#define COL 3

void intinalbroad (char broad[ROW][COL], int row, int col);

void showbroad(char broad[ROW][COL], int row, int col);

void wanjia(char broad[ROW][COL]); // 玩家进行坐标的输入；

void computer(char broad[ROW][COL]); // 电脑进行随机输入；

char win(char broad[ROW][COL], int row, int col, int win_flag);
