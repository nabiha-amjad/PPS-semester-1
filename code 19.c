#include <stdio.h>
int main ()
{
    float amount,discountrate, discount, finalprice;0
    printf("enter purchase amount:");
    scanf("%f", &amount);
    if (amount <5000)
        discountrate = 5;
    else if (amount <10000)
        discountrate = 10;
    else if (amount < 20000)
        discountrate = 15;
    else
        discountrate = 20;
    discount = amount * discountrate/100;
    finalprice = amount - discount;
    printf("discount = %.2f", discount);
    printf("\nfinalprice = %.2f" , finalprice);
    return 0;
}
