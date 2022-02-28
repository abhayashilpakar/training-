#include<stdio.h>
#include<conio.h>
int main ()
{
    char hell,he;
    for(hell='A';hell<='Z';hell=hell+1)
    printf("%c %d\t",hell,hell);
    for(he='a';he<='z';he=he+1)
    printf("\n%c %d\t",he,he);

    return 0;
}
