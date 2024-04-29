# include <stdio.h>
# include "game.h"

void begin_show(void)
{
    printf("***************************\n");
    printf("******0、begin 1、end *****\n");
    printf("***************************\n");
}

int main()
{
    int choice = 0;
    begin_show();
    do 
    {
        scanf("%d", &choice);
        switch(choice)
        {
            case 0:
                game();
                break;
            case 1:
                break;
        }
    } while(choice == 0); 
    
    return 0;
}