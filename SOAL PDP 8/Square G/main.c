#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    for (x = 1; x <= 5; x++)
    {
        for (y = x; y <= x+5; y++)
        {
            printf("%d ", y);
        }
    printf("\n\n");
    }
    return 0;
}
