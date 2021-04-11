#include <stdio.h>
#include <stdlib.h>

int main()
{
        int x, semester[10], jmlMhs;
    int inputKondisi;
    float ipk [10];
    char nama [10][40];
    char nim [10][30];
    printf("Jumlah mahasiswa yang diinputkan : ");      scanf("%d", &jmlMhs);

    for (x=0; x<jmlMhs; x++){
    printf("Nim      : ");       fflush(stdin);gets(nim);
    printf("Nama     : ");       fflush(stdin);gets(nama);
    printf("Semester : ");       scanf("%d",&semester);
    printf("Ipk      : ");       scanf("%f",&ipk);
    printf("\n");
    }
    system("cls");
    printf("1. Nama\n");
    printf("2. Nim\n");
    printf("3. Ipk\n");
    printf("\nTampilkan Mahasiswa yang terdaftar berdasarkan ? ");
    scanf("%d", &inputKondisi);
    printf("\n");
    if (inputKondisi==1){
        for (x=0; x<jmlMhs; x++)
        {
            printf("%s\n", nama[x]);
        }
    }
    else if(inputKondisi==2){
        for (x=0; x<jmlMhs; x++)
        {
            printf("%s\n", nim[x]);
        }
    }
    else if(inputKondisi==3){
        for (x=0; x<jmlMhs; x++)
        {
            printf("%.2f\n", ipk[x]);
        }
    }

    return 0;
}
