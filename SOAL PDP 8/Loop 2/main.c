#include <stdio.h>
#include <stdlib.h>

int main()
{
    int batas, x;
    printf("Masukkan batas : "); scanf("%d", &batas);
    for (x = 1; x <= batas; x++)
    {
        if (x != 4 && x != 5)
        printf("%d  ", x);
    }
    return 0;
}
