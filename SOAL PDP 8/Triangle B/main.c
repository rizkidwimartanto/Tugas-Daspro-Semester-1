#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    for (x = 1; x <= 5; x++)
    {
        for (y = 2; y <= x * 2; y+=2)
        {
            printf("%d ", y);
        }
        for (y = (x - 1) * 2; y >= 2; y -=2)
        {
            printf("%d ", y);
        }
        printf("\n\n");
    }
    return 0;
}
