#include <stdio.h>
int main()
{
    int num;
    printf("enter");
    scanf("%d",num);
    
    while(num!=0)
    {
        if(num>0)
        {
            printf("正");

        }
        else
        {
            printf("負");
        }
        printf("enter");
        scanf("%d",num)
    }
    printf("%d\n",sum);

    return 0;

}