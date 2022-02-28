#include<stdio.h>
#include<conio.h>
int main()
{
    float firstNum, secondNum;
    float result;
    char Operator;
    printf("+ for Addition\n- for Subtraction\n* for Multiplication\n/ for Division\n\nEnter an Operator: ");
    scanf("%s",&Operator);
    printf("Enter two number : ");
    scanf("%f%f",&firstNum,&secondNum);
    switch(Operator)
    {
        case '+':
            result=firstNum+secondNum;
            printf("\n%.0f %c %.0f = %.0f",firstNum,Operator,secondNum,result);
            break;

        case '-':
            result=firstNum-secondNum;
            printf("\n%.0f %c %.0f = %.0f",firstNum,Operator,secondNum,result);
            break;

        case '*':
            result=firstNum*secondNum;
            printf("\n%.0f %c %.0f = %.0f",firstNum,Operator,secondNum,result);
            break;

        case '/':
            result=firstNum/secondNum;
            printf("\n%.0f %c %.0f = %.2f",firstNum,Operator,secondNum,result);
            break;

        default:
            printf("Operator Not recoginzed ");
        }
            return 0;
    }
