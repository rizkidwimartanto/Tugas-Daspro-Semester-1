#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///ANALISA SEQUENTIAL///
    int a,b,c;

    a=12;
    b=5;

    printf("Masukan nilai b : ",b);
    scanf("%i",&b);

    c=b-a;

    printf("Masukan nilai c : %i \n",c);
    system ("pause");
    /*
    Baris  A    B   C
    1      12   5  -7
    2      10   15  5
    3      5    20  15
    */

    ///ANALISA KASUS///
    /*KONSUMEN*/
    char nama_konsumen [100] = "Rizki Dwi";
    char tanggal_konsumen [100] = "10 Oktober 2018";
    char luas_dinding [100] = "20 m2";
    printf("Nama Konsumen              : %s\n",nama_konsumen);
    printf("Tanggal Pembelian          : %s\n",tanggal_konsumen);
    printf("Luas Dinding               : %s\n\n",luas_dinding);

    /*NOTA PEMBELIAN*/
    char nama_pembeli [100] = "Rizki Dwi";
    char tanggal_pembeli [100] = "10 Oktober 2018";
    int jumlah_kaleng_cat, satu_kaleng;
    int harga_yang_dibayar_konsumen, harga_perkaleng;
    satu_kaleng = 10;
    jumlah_kaleng_cat = 20 / 10;
    harga_perkaleng = 25000;
    harga_yang_dibayar_konsumen = 25000 * 2;
    printf("Nama Pembeli               : %s\n",nama_pembeli);
    printf("Tanggal Pembelian          : %s\n",tanggal_pembeli);
    printf("Total Kaleng Cat           : 20 m2 / 10 m2 = %i buah cat\n",jumlah_kaleng_cat);
    printf("Harga Yang Dibayar Pembeli : Rp.25000 * 2 buah cat = Rp.%i\n\n",harga_yang_dibayar_konsumen);
    system ("pause");

    ///ANALISA KASUS///
    float alas_tabung, tinggi_tabung,jari_jari_kelereng, volume_tabung, volume_kelereng, volume_air_tumpah;
    alas_tabung = 3.14 * 2 * 2;
    tinggi_tabung = 12;
    volume_tabung = alas_tabung * tinggi_tabung;
    jari_jari_kelereng = 2;
    volume_kelereng = 4/3 * (3.14) * jari_jari_kelereng * jari_jari_kelereng;
    printf("volume air tumpah = volume kelereng");

    return 0;
}
