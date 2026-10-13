#include <stdio.h>
int main()
{
    int age;
    printf("age:");
    scanf("%d",&age);
    if(age>=65)
    {
        printf("敬老票");
    }
    else if(age<=6)
    {   
        printf("免費");
    }
    else if (age<=12)
    {
        printf("兒童票");
    }
    
    else
    {
        printf("全票");
    }
    return 0;
}