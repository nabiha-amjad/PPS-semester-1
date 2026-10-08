#include <stdio.h>
int main()
{
    int CP,SP;
    printf("enter CP AND SP");
    scanf("%d%d",&CP,&SP);
    if ( CP == SP )
    {
        printf("%d is the profit",CP);
    }
    else if ( SP>CP )
    {
        printf("%d is the loss",SP);
    }
    return 0;
}
