#include <stdio.h>
#include <stdlib.h>

int main()
{
    int baris, kolom;

    baris = 1;
    while (baris <= 5)
    {
        kolom = 1;
        while (kolom <= baris)
        {
            printf("*", kolom);
            kolom++;
        }
    printf("\n");
    baris++;
    }
    return 0;
}
