#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x[45],cari;
    int batas,y,coba;
    char tanya;
    input :
    printf("Masukkan Batas: ");
    scanf("%d", &batas);
    for(y=1; y<=batas; y++)
    {
        printf("Input : ");
        scanf("%f", &x[y]);
    }
    printf("Apakah Ingin Input lagi ? Y/N : ");
    fflush(stdin);
    scanf("%c",&tanya);

    if(tanya=='y'||tanya=='Y')
    {
        system("cls");
        goto input;
    }else if (tanya=='n'||tanya=='N')
    {
        printf("\nAngka yang di cari: ");
        scanf("%f", &cari);

        coba = 0;
        for(y=1; y<=batas; y++)
        {
            if(x[y]==cari)
            {
                coba = 1;
                printf("\n%.2f data ditemukan pada index ke - %d", cari, y);
                break;
            }
        }
            if(coba==0)
            {
                printf("\n%.2f tidak ditemukan", cari);
            }
    }
    return 0;
}
