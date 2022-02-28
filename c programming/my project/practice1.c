#include<stdio.h>
#include<conio.h>
int sumAdd(int num1,int num2)
{
    return num1 + num2;

}
int sumA()
{
    int a;
    printf("enter the first  number :");
    scanf("%d",&a);
    return a;


}
int sumB()
{
   int a;
   printf("enter the  second number  : ");
    scanf("%d",&a);
    return a;
}
int main()
{
    printf("The sum  = %d ",sumAdd(sumB(),sumA()));
    return 0;
}
