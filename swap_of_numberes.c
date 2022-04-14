#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;

    printf("enter x ");

    scanf(x);
    printf("enter y");

    scanf(y);

    x=x+y;
    y=x-y;
    x=x-y;

    printf("after swapping x = " );
    printf(x)
    printf("after swapping y = " );
    printf(y);


    return 0;
}
