#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriks [5][5]=
    {
    {2, 4, 7, 7, 1},
    {8, 9, 1, 8, 2},
    {5, 3, 6, 3, 1},
    {7, 8, 1, 0, 5},
    {2, 1, 3, 4, 9}
    };
    int baris, kolom;
    for (baris=0; baris<5; baris++){
        for (kolom=0; kolom<5; kolom++){
            printf("%d  ", matriks[baris][kolom]);
        }
    printf("\n\n");
    }
    int jumlah;
    jumlah = matriks[0][0] + matriks [1][1] + matriks [2][2] + matriks [3][3] + matriks [4][4];
    printf("Output = %d", jumlah);

    return 0;
}
