#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///INPUTAN
    char nama_pembeli [100];
    char tanggal_pembeli [100];
    int luasDinding;
    int jumlah_kaleng_cat, satu_kaleng;
    int harga_yang_dibayar_konsumen, harga_perkaleng;
    int potonganHarga, nilaiPotonganHarga, hargaSetelahDiskon, pelangganMembeli;
    satu_kaleng = 10;
    jumlah_kaleng_cat = 20 / 10;
    harga_perkaleng = 25000;
    harga_yang_dibayar_konsumen = 25000 * 2;

    ///NOTA PEMBELIAN
    printf("------MENGHITUNG POTONGAN HARGA DARI PEMBELIAN CAT------\n");
    printf("Nama Pembeli                   : ");fflush(stdin);gets(nama_pembeli);
    printf("Tanggal Pembelian              : ");fflush(stdin);gets(tanggal_pembeli);
    printf("Luas Dinding                   : ");scanf("%d",&luasDinding);
    printf("Total Kaleng Cat               : 20 m2 / 10 m2         = %i buah cat\n",jumlah_kaleng_cat);
    printf("Harga Yang Dibayar Pembeli     : Rp.25000 * 2 buah cat = Rp. %i\n",harga_yang_dibayar_konsumen);
    printf("Pelanggan Membeli : ");scanf("%d",&nilaiPotonganHarga);
    pelangganMembeli = nilaiPotonganHarga >= 1 && nilaiPotonganHarga <= 10;
    if (nilaiPotonganHarga >=1 && nilaiPotonganHarga <= 10){
        printf("Rp. 25.000\n\n");
        }
    else if (nilaiPotonganHarga >= 11 && nilaiPotonganHarga <= 25){
        printf("Rp. 24.500\n\n");
        }
    else if (nilaiPotonganHarga >= 26 && nilaiPotonganHarga <= 50){
        printf("Rp. 23.000\n\n");
        }
    else if (nilaiPotonganHarga >= 50){
        printf("Rp. 22.500\n\n");
        }
    else {
        printf("salah\n\n");
    }

    printf("Potongan Harga       = ");scanf("%d",&potonganHarga);
    hargaSetelahDiskon = harga_yang_dibayar_konsumen - potonganHarga;
    printf("Harga Setelah Diskon = %d\n", hargaSetelahDiskon);
    system("pause");

    printf("------HITUNG BERAT BADAN IDEAL------\n");
    float tinggiBadan, beratBadan, bmi;
    int nilaiBmi;
    printf("Tinggi Badan : ");scanf("%f",&tinggiBadan);
    printf("Berat Badan  : ");scanf("%f",&beratBadan);
    bmi = beratBadan / (tinggiBadan * tinggiBadan);
    printf("BMI          : %f\n",bmi);
    printf("Masukkan Nilai BMI : ");scanf("%d",&nilaiBmi);

    int cekBmi;
    cekBmi = nilaiBmi <= 18;
    if (nilaiBmi <= 18){
        printf("Kurus\n\n");
    }
    else if (nilaiBmi >= 18 && nilaiBmi <= 25){
        printf("Normal\n\n");
    }
    else if (nilaiBmi >= 25 && nilaiBmi <= 27){
        printf("Kegemukan\n\n");
    }
    else if (nilaiBmi >= 27){
        printf("Obesitas\n\n");
    }
    else{
        printf("salah\n\n");
    }
    system("pause");

    printf("------APLIKASI KASIR UNTUK SEBUAH CAFE DI SEMARANG-----\n");
    char namaPelanggan [50];
    char tanggalPembelian [50];
    printf("Nama Pembeli      : ");fflush(stdin);gets(namaPelanggan);
    printf("Tanggal Pembelian : ");fflush(stdin);gets(tanggalPembelian);
    int pilihan, totalPembayaran, jumlahPembelian, harga;
    printf("Menu Minuman :\n");
    printf("1.Ice Tea\t\t\t");                                printf("Rp. 6000\n");
    printf("2.Caramel Machiato\t\t");                         printf("Rp. 30.000\n");
    printf("3.Green Tea Latte\t\t");                          printf("Rp. 25.000\n");
    printf("4.Milkshake\t\t\t");                              printf("Rp. 15.000\n");
    printf("5.Chocolate Hazelnut\t\t");                       printf("Rp. 25.000\n");
    printf("Masukkan pilihan : ");scanf("%d", &pilihan);


    switch(pilihan){
        case 1:
            printf("Ice Tea\n\n");
            break;
        case 2:
            printf("Caramel Machiato\n\n");
            break;
        case 3:
            printf("Green Tea Latte\n\n");
            break;
        case 4:
            printf("Milkshake\n\n");
            break;
        case 5:
            printf("Chocolate Hazelnut\n\n");
            break;
        default:
            printf("salah\n\n");
    }
    printf("Harga : ");scanf("%d",&harga);
    printf("Jumlah Pembelian : ");scanf("%d", &jumlahPembelian);
    totalPembayaran = jumlahPembelian * harga;
    printf("Total Pembayaran = %d\n", totalPembayaran);

    printf("--------------------------------------------------------------------------------\n");
    printf("                                RIZKI DWI MARTANTO                              \n");
    printf("                                 A11.2018.11468                                 \n");
    printf("--------------------------------------------------------------------------------\n");
    return 0;
}
