#include <stdio.h>
  int main()
{
    int length;
    int breadth;
    int area;
    printf("Enter length of rectrangle:");
    scanf("%d", &length);
    printf("Enter breadth of rectrangle:");
    scanf("%d", &breadth);
    area=length *breadth;
    printf("the area of rectrangle: %d",area);
    return 0;
}
