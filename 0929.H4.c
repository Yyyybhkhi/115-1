#include <stdio.h>
int main()
{
    int hp=100;
    hp-=30;
    hp+=20;
    hp-=15;
    
    printf("最後生命:%d",hp);
    return 0;
}