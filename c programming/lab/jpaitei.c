#include<stdio.h>
#include<conio.h>
int num1()
{
    int a;
    printf("enter the first number : ");
    scanf("%d",&a);
    return a;
}

float num2()
{
    float  b;
    printf("enter the second number :");
    scanf("%f",&b);
    return b;

}
int main()
{
    char add;
    printf(" enter  operations ");
    scanf("%c",&add);
    switch(add)
    {
    case '+':
        printf("sum = %.0f",(num1() + num2()));
        break;

    case '-':
        printf("subtraction is %.0f",(num1() - num2()));
        break;

    case '*':
        printf("multiplication  is %.0f",(num1() * num2()));
        break;

    case '/':
        printf("division is %.2f",(num1() / num2()));
        break;

    default:
        printf("Invalid Operations");
        break;

    }
}



