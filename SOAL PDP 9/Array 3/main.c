#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x[10];
    int y,data;
    char tanya;
    do
    {
    printf("Masukkan Jumlah Data : ");
    scanf("%d",&data);
    for(y=1;y<=data;y++)
    {
        printf("Input : ");         scanf("%f",&x[y]);
    }
    printf("Apakah anda ingin input lagi? [Y/N] = ");
    fflush(stdin);
    scanf("%c",&tanya);

    }while(tanya=='y'||tanya=='Y');
    for(y=1;y<=data;y++)
        {
            printf("%.2f ",x[y]);
        }
    return 0;
}
