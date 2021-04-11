#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    c = 0;

    for (a = 1; a <= 5; a++)
    {
        d = (a & 1) ? (c + 1) : (c + a);
        for (b = 1; b <= a; b++)
        {
            printf("%-3d", d);
            if (a & 1)
                d++;
            else
                d--;
            c++;
        }
    printf("\n\n");
    }
    return 0;
}
