#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    float average;
    printf("enter the 1st num:");
    scanf("%d", &a);
    printf("enter the 2nd num;");
    scanf("%d", &b);
    printf("enter the 3rd num;");
    scanf("%d", &c);
    average = (a+b+c)/3;
    printf("the average of three numbers is: %f", average);
    return 0;
}
