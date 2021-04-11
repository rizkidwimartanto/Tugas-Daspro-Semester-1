#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[10],y,batas,cari,genap=0;
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
    for(y=1;y<=batas;y++)
    {
        if((x[y]%2==0))
        {
            genap+=1;
        }
        if(genap==2)
        {
            printf("\n%d Terdapat pada urutan ke-%d",x[y],y);
            break;
        }

    }
    return 0;
}
