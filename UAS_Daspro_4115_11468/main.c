#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    int barang;
    char tipe[100];
    int totalHarga;
    printf("Masukkan jumlah barang : ");                              scanf("%d",&barang);
    printf("\n");
    int jumlahBeli[barang][2];
    int nama[barang][100];
    int Harga;
    for(x=0; x<barang; x++){
        printf("Barang %d\n", x+1);
        printf("Nama : ");                                     fflush(stdin);gets(nama[x]);
        printf("\n");
    for(y=0; y<=2; y++){
        switch(y){
        case 0:
            printf("Barang : ");                               fflush(stdin); gets(tipe);
            printf("Harga  : ");                               scanf("%d",&Harga);
            printf("Jumlah yang akan dibeli : ");              scanf("%d",&jumlahBeli[x][y]);
        if(jumlahBeli[x][y] > 5){
            totalHarga = Harga * jumlahBeli[x][y];
            printf("Total harga\t : %d\n\n", totalHarga);
            printf("Mendapatkan bonus laptop\n\n");
        }
        else if(jumlahBeli[x][y] < 5){
            totalHarga = Harga * jumlahBeli[x][y];
            printf("Total harga\t: %d\n", totalHarga);
            printf("Tidak mendapatkan bonus\n\n");
        }
        break;
        printf("\n");

        case 1:
            printf("Barang : ");                               fflush(stdin); gets(tipe);
            printf("Harga  : ");                               scanf("%d",&Harga);
            printf("Jumlah yang akan dibeli : ");              scanf("%d",&jumlahBeli[x][y]);
        if(jumlahBeli[x][y] > 5){
            totalHarga = Harga * jumlahBeli[x][y];
            printf("Total Harga\t: %d\n", totalHarga);
            printf("Mendapatkan bonus laptop\n\n");
        }
        else if(jumlahBeli[x][y] < 5){
            totalHarga = Harga * jumlahBeli[x][y];
            printf("Total Harga\t: %d\n\n", totalHarga);
            printf("Tidak mendapatkan bonus\n\n");
        }
        break;
        }
    }
    printf("\n");
    }

    return 0;
}
