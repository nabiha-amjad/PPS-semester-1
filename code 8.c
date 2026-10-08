#include <stdio.h>
int main()
{
    float p;
    float t;
    float r;
    float simpleinterest;
    printf("enter the principle;");
    scanf("%f",&p);
    printf("enter the time;");
    scanf("%f",&t);
    printf("enter the  rate;");
    scanf("%f",&r);
    simpleinterest = (p*t*r)/100;
    printf("the simpleinterest is; %f", simpleinterest);
    return 0;
}

