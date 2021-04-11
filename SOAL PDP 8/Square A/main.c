#include <stdio.h>
#include <stdlib.h>

int main()
{
    int baris, kolom;
    for (baris = 1; baris <= 4; baris++)
    {
        for (kolom = 1; kolom <= 5; kolom++)
        {
            if (kolom % 2 == 1)
            printf("0 ");

            else
            printf("1 ");

        }

    printf("\n\n");
    }
    return 0;
}
