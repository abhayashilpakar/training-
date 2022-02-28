#include<stdio.h>
#include<conio.h>
int main ()
{
    int num, choose, choose_item, qty;
    int fry_momo = 110 ;
    int momo = 100;
    int black_coffee = 40;
    int milk_coffee = 50;
    int black = 15;
    int milk = 20;
    printf("1.Food \n 2.exit\n");
    printf("Please Select : ");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
            printf("Menu list\n 1.MOMO\n 2.Cofee\n 3.Tea\n");
            printf("Choose your Item : ");
            scanf("%d",&choose);
            switch(choose)
            {
                case 1:
                    printf("MOMO\t Price\n 1.Fry momo\t Rs.110\n 2.Buff momo\t Rs.100\n");
                    printf("choose your  order : ");
                    scanf("%d", &choose_item);
                    switch(choose_item)
                    {
                        case 1:
                            printf("fry momo\n please enter your  order : ");
                            scanf("%d", &qty);
                            printf("Your total  bill is Rs %d for %d plate momo",(qty*fry_momo), qty);
                            break;

                        case 2:
                            printf("buff momo\n please enter your  order : ");
                            scanf("%d", &qty);
                            printf("Your total  bill is Rs %d for %d plate momo",(qty*momo), qty);
                            break;
                        default:
                            printf("invalid ");


                    }
                    break;

                case 2:
                    printf("Coffee\t Price\n 1.Black coffee\t Rs.40\n 2.Milk coffee\t Rs.50\n");
                    printf("choose your  order : ");
                    scanf("%d", &choose_item);
                    switch(choose_item)
                    {
                        case 1:
                            printf("black coffee\n please enter your  order : ");
                            scanf("%d", &qty);
                            printf("Your total  bill is Rs %d for %d plate momo",(qty*black_coffee), qty);
                            break;

                        case 2:
                            printf("milk coffee\n please enter your  order : ");
                            scanf("%d", &qty);
                            printf("Your total  bill is Rs %d for %d plate momo",(qty*milk_coffee), qty);
                            break;
                        default:
                            printf("Invalid");


                    }
                    break;
                case 3:
                    printf("Tea\t Price\n 1.Black tea\t Rs.15\n 2.milk tea\t Rs.20\n");
                    printf("choose your  order : ");
                    scanf("%d", &choose_item);
                    switch(choose_item)
                    {
                        case 1:
                            printf("black tea\n please enter your  order : ");
                            scanf("%d", &qty);
                            printf("Your total  bill is Rs %d for %d plate momo",(qty*black), qty);
                            break;

                        case 2:
                            printf("milk  tea\n please enter your  order : ");
                            scanf("%d", &qty);
                            printf("Your total  bill is Rs %d for %d plate momo",(qty*milk), qty);
                            break;
                        default:
                            printf("Invalid ");
                    }
                    break;

                default:
                    printf("You  haven't order");

            }
            break;

        case 2 :
            printf("this  is jpaitei");
        break;

        default:
            printf("you  have  enter  invalid number\nThank you  for using our service!  ");
    }
    return 0;
}
