#include<stdio.h>
#include<conio.h>
int main ()
{
    int age;
    printf("Enter Age : ");
    scanf("%d", &age);
    if(age<18)
    {
        printf("child");
    }
    else if(age>=18 && age<25)
    {
        printf("teenage");
    }
    else
    {
        printf("young");
    }
    return 0;
}
