#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int batas;
    printf("Masukkan Jumlah Array : ");     scanf("%d", &batas);
    int y [batas];
    for (x = 0; x <= batas; x++){
    printf("Array %d : \n", x);             scanf("%d", &y [x]);
    }

    puts("\n");
    int a;
    int batas2;
    printf("Masukkan Jumlah Array : ");     scanf("%d", &batas2);
    int b [batas2];
    for (a = 0; a <= batas2; a++){
    printf("Array %d : \n", a);             scanf("%f", &b [a]);
    }

    puts("\n");
    int i;
    int batas3;
    printf("Masukkan Jumlah Array : ");     scanf("%d", &batas3);
    char j [batas3] ;
    printf("Masukkan String       : ");     scanf("%s", &j);
    for (i = 0; i <= batas3; i++){
    printf("Array %d : \n", i);             scanf("%c", &j [i]);
    }
    return 0;
}
