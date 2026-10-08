
#include <stdio.h>
int main()
{
    float r;
    float area ;
    float perimeter ;
    printf("enter the radius;");
    scanf("%f",&r);
    area= 3.14*r*r;
    perimeter=2*3.14*r;
    printf("the area is ;%f", area);
    printf("the perimeter is ;%f", perimeter);
    return 0;
}
