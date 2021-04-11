#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    int a, b;
    a = 6 / 2;
    b = 6 / 2;
    for (x = 1; x <= 5; x++)
    {
        for (y = 1; y <= 5; y++)
        {
            if (b == y || a == x)
            printf("0 ");

            else if ((5 % 2 == 0 && b + 1 == y) || (5 % 2 == 0 && a + 1 == x))
            printf("0 ");

            else
            printf("1 ");
        }
    printf("\n\n");
    }
    return 0;
}
