#include <stdio.h>
#include <stdlib.h>

int main()
{
        int matriksA [5] [5]=
    {
        {25,24,23,22,21},
        {20,19,18,17,16},
        {15,14,13,12,11},
        {10,9,8,7,6},
        {5,4,3,2,1}
    };
        int matriksB [5] [5]=
    {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
    int baris, kolom;
    printf("Matriks 1 : \n\n");
    for (baris=0; baris<5; baris++){
        for(kolom=0; kolom<5; kolom++){
            printf("%d  ", matriksA [baris] [kolom]);
        }
    printf("\n\n");
    }
    printf("\n");
    printf("Matriks 2 : \n\n");
    for (baris=0; baris<5; baris++){
        for(kolom=0; kolom<5; kolom++){
            printf("%d  ", matriksB [baris] [kolom]);
        }
    printf("\n\n");
    }
    system("pause");
    int matriksC [5][5];
    printf("Penjumlahan 2 Matriks : \n\n");
    for (baris=0; baris<5; baris++){
        for(kolom=0; kolom<5; kolom++){
            matriksC [baris][kolom] = matriksA [baris][kolom]+matriksB[baris][kolom];
        }
    }
        for (baris=0; baris<5; baris++){
        for(kolom=0; kolom<5; kolom++){
            printf("%d  ", matriksC [baris] [kolom]);
        }
    printf("\n\n");
    }
    system("pause");
    int matriksD[5][5];
    printf("Pengurangan 2 Matriks : \n\n");
    for (baris=0; baris<5; baris++){
        for(kolom=0; kolom<5; kolom++){
            matriksD [baris][kolom] = matriksA [baris][kolom]-matriksB[baris][kolom];
        }
    }
    for (baris=0; baris<5; baris++){
        for(kolom=0; kolom<5; kolom++){
            printf("%d  ", matriksD [baris] [kolom]);
        }
    printf("\n\n");
    }
    system("pause");
    int matriksE [5][5];
    printf("Perkalian 2 Matriks : \n\n");
    for (baris=0; baris<5; baris++){
        for(kolom=0; kolom<5; kolom++){
            matriksE [baris][kolom] = matriksA [baris][kolom]*matriksB[baris][kolom];
        }
    }
    for (baris=0; baris<5; baris++){
        for(kolom=0; kolom<5; kolom++){
            printf("%d  ", matriksE [baris] [kolom]);
        }
    printf("\n\n");
    }
    return 0;
}
