#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter 2 numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping\n");
    printf("a=%d\nb=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping\n");
    printf("a=%d\nb=%d\n",a,b);
    return 0;
}
