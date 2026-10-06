#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age >= 18)
    {
        printf("成年人");
    }
    
    return 0;
}