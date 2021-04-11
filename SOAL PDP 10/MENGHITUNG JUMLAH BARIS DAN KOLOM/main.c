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
    int jumlahBaris, jumlahKolom;
        for (baris=0; baris<5; baris++){
        for (kolom=0; kolom<5; kolom++){
            printf("%d ", matriks[baris][kolom]);
        }
    printf("\n\n");
    }

    for (baris=0; baris<5; baris++){
        jumlahBaris = 0;
        for (kolom=0; kolom<5; kolom++){
            jumlahBaris += matriks[baris][kolom];
        }
    printf("Jumlah baris %d = %d\n",baris+1, jumlahBaris);
    }
    puts("\n");

    for (kolom=0; kolom<5; kolom++){
        jumlahKolom = 0;
    for (baris=0; baris<5; baris++){
        jumlahKolom += matriks[baris][kolom];
        }
    printf("Jumlah kolom %d = %d\n",kolom+1, jumlahKolom);
    }
    return 0;
}
