#include <stdio.h>
#include <stdlib.h>

typedef struct{

    char name[30];
    int age;
    int phoneNo;
    int salary;

} Employee;

int main()
{
    int i,n;

    Employee employees[20];
    printf("Enter the number of Employees:\n");
    scanf("%d",&n);
    printf("Enter %d Employee Details \n \n",n);
    printf("NAME\t\tAGE\t\tPHONE NO\t\tSALARY\n\n");
    for(i=0; i<n; i++)
    {
        scanf("%s%d%d%d",employees[i].name,&employees[i].age,&employees[i].phoneNo,&employees[i].salary);
        printf("\n");
    }


    printf("-------------- All Employees Details ---------------\n");
    printf("NAME\t\tAGE\t\tPHONE NO\t\tSALARY\n\n");

    for(i=0; i<n; i++){

        printf("%s\t\t%d\t\t%d\t\t%d",employees[i].name,employees[i].age,employees[i].phoneNo,employees[i].salary);
        printf("\n");
    }

    return 0;

}
