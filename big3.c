#include <stdio.h>

void biggest3()
{
    int a, b, c;
    printf("\n\nEnter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("The largest number is: %d", a);
    } else if (b >= a && b >= c) {
        printf("The largest number is: %d", b);
    } else {
        printf("The largest number is: %d\n", c);
    }

 //   return 0;
}
