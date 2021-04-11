#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[15],y,z,batas,cari,ganjil=0,jumlahganjil;
    printf("Masukkan batas array : ");
    scanf("%d",&batas);
    for(y=1;y<=batas;y++)
    {
        printf("Masukkan angka : ");
        scanf("%d",&x[y]);
    }
    system("cls");
    for(y=1;y<=batas;y++)
    {
        printf("%d ",x[y]);
    }
    for(z=1;z<=batas;z++)
    {
        if(x[z]%2==1)
        {
            ganjil++;
            jumlahganjil=z;
        }

    }
    printf("\n%d Terdapat pada urutan ke-%d ",x[jumlahganjil],jumlahganjil);
    return 0;
}
