#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    for (x = 1; x <= 5; x++)
    {
        for (y = 1; y <= 5; y++)
        {
            if ((x == 1 || x == 5) && (y == 1 || y == 5))
            printf("0 ");

            else if ((x == 1 || x == 5) || (y == 1 || y == 5))
            printf("1 ");

            else
            printf("0 ");
        }
    printf("\n\n");
    }

    return 0;
}
