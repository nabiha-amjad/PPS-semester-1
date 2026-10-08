#include <stdio.h>

int main()

{
    int age;
    printf("Enter your age : ");
    scanf("%d", &age); //address-of the operator &

    printf("your age is : %d", age);
    return 0;
}
