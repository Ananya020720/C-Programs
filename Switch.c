#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch;
    printf("Enter a number from 1 to 5:\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:printf("Food Item-Pizza\nPrice-Rs 239\n");
             break;
      case 2:printf("Food Item-Burger\nPrice-Rs 129\n");
             break;
      case 3:printf("Food Item-Pasta\nPrice-Rs 179\n");
             break;
      case 4:printf("Food Item-French Fries\nPrice-Rs 99\n");
             break;
      case 5:printf("Food Item-Sandwich\nPrice-Rs 149\n");
             break;
      default:printf("Please Enter a valid choice");
    }
    return 0;
}
