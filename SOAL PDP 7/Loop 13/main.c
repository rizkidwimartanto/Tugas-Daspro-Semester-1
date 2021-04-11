#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka, faktorial, hasil;
    printf("Masukkan Faktorial : ");        scanf("%d",&faktorial);
    angka = faktorial;
    for (angka = 1; angka <= 10; angka++){
        hasil = angka * faktorial;
        printf("%d * %d = %d\n", angka, faktorial, hasil);
    }
    return 0;
}
