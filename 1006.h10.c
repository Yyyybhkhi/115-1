#include <stdio.h>
int main()
{
    int login;
    int black;
    int money_all;
    int money_get;
    printf("Enter your login: ");
    scanf("%d", &login);
    printf("Enter your money-all: ");
    scanf("%d", &money_all);
    printf("Enter your money-get: ");
    scanf("%d", &money_get);
    printf("Enter your black: ");
    scanf("%d", &black);
    if (login == 1)
    {
        if (money_all >= money_get)
        {
            printf("交易成功。");
        }
        else
        {
            printf("交易失败。");
        }
    }
    else
    {
        if (black == 1)
        {
            printf("交易失败。");
        }
        else
        {
            printf("交易成功。");
        }
    }

    return 0;
}



   
