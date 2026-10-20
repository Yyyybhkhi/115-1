
#include <stdio.h>
int main()
{
    int pswd=1234;
    printf("請輸入密碼（輸入-1退出):");
    scanf("%d",&pswd);
    while(pswd!=1234 && pswd!=-1)
    {
        printf("密碼錯誤，請重新輸入（輸入-1退出):");
        scanf("%d",&pswd);
    }
    if(pswd == 1234)
    {
        printf("登入成功");
    }
    else
    {
        printf("已退出程式");
    }


    return 0;

}