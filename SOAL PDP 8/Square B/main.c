#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;
    z = 1;
    for (x = 1; x <= 5; x++)
    {
        for (y = 1; y <= 5; y++)
        {
            if (z == 1)
            printf("1 ");

            else
            printf("0 ");
            z *= -1;
        }
        if (5 % 2 == 0)
            z *= -1;

    printf("\n\n");
    }
    return 0;
}
