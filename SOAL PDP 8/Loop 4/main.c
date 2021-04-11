#include <stdio.h>
#include <stdlib.h>

int main()
{
    int batas, x, y, z;
    printf("Masukkan batas bilangan prima : "); scanf("%d", &batas);
    for (x = 1; x <= batas; x++)
    {
        for (y = 1; y <= x; y++)
        {
            if (x % y == 0){
                z++;
            }
        }
    if (z == 2) printf("%d  ", x);
    z = 0;
    }
    return 0;
}
