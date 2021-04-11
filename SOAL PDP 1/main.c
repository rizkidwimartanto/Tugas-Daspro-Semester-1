#include <stdio.h>
#include <stdlib.h>

int main()
{
    //deklarasi
    int alas, tinggi, sisi1, sisi2, sisi3, hasil2;
    float hasil1;
    char a [100];
    char b [100];
    char c [100];
    int d;
    int e;


    // inisialisasi
    alas = 3 ;
    tinggi = 1;
    sisi1 = 3;
    sisi2 = 4;
    sisi3 = 5;
    hasil1 = 0.5 * (alas * tinggi);
    hasil2 = sisi1 + sisi2 +sisi3;
    strcpy (a,"Al-Qur`an");
    strcpy (b,"Kertas");
    strcpy (c,"Biru");
    d = 10;
    e = 55000;


    printf("*LUAS SEGITIGA\n");
    printf("Alas\t\t = 3 cm\n");
    printf("Tinggi\t\t = 4 cm\n");
    printf("Luas Segitiga\t = 0.5 * %i cm * %i cm = %f cm\n\n", alas, tinggi, hasil1);
    printf("*KELILING LINGKARAN\n");
    printf("Sisi1\t\t\t = 3 cm\n");
    printf("Sisi2\t\t\t = 4 cm\n");
    printf("Sisi3\t\t\t = 5 cm\n");
    printf("Keliling Lingkaran\t = %i cm + %i cm + %i cm = %i cm\n\n", sisi1, sisi2, sisi3, hasil2);
    printf("*ANALISIS OBJEK\n");
    printf("Nama Objek\t = %s\n",a);
    printf("Bahan\t\t = %s\n",b);
    printf("Warna\t\t = %s\n",c);
    printf("Ukuran\t\t = %d cm\n",d);
    printf("Harga\t\t = Rp.%d\n",e);
    return 0;
}
