#include <stdio.h>
int main()
{
    float a;
    float b;
    float c;
    printf("輸入三角形底邊長:");
    scanf("%f",&a);
    printf("輸入三角形的高:");
    
    scanf("%f",&b);
    
    printf("三角形的面積是:%.2f",c=a*b/2);
    return 0;
}