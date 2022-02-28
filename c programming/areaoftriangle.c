#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<math.h>
int main ()
{
    int a,b,c;
    float semi;
    printf("enter the 3  sides : ");
    scanf("%d%d%d",&a, &b, &c);
    semi=(a+b+c)/2;
    float area  = sqrt(semi*(semi-a)*(semi-b)*(semi-c));
    printf("the area is %f",area);


    return 0;
}
