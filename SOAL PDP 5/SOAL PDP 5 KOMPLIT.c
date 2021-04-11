#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("------Menyalurkan Beasiswa------\n");
    char nama [50];                 char namaOrangTua [50];
    char nim [50];                  char pekerjaanOrangTua [50];
    char alamat [50];               char pekerjaanOrangTuaPerempuan [50];
    int semesterDitempuh;           int  gajiOrangTuaPerBulan;
    float ipk;

    printf("Nama                          : ");               fflush(stdin);gets(nama);
    printf("Nim                           : ");               fflush(stdin);gets(nim);
    printf("Alamat                        : ");               fflush(stdin);gets(alamat);
    printf("Nama Orang Tua                : ");               fflush(stdin);gets(namaOrangTua);
    printf("Pekerjaan Orang Tua           : ");               fflush(stdin);gets(pekerjaanOrangTua);
    printf("Pekerjaan Orang Tua Perempuan : ");               fflush(stdin);gets(pekerjaanOrangTuaPerempuan);
    printf("Gaji Orang Tua per Bulan      : ");               scanf("%d",&gajiOrangTuaPerBulan);
    printf("Semester Yang Ditempuh        : ");               scanf("%d",&semesterDitempuh);
    printf("ipk                           : ");               scanf("%f",&ipk);
    puts("\n");

    float nilaiIpk;                                   int semester;                                       int pendapatanOrangTua;
    printf("IPK\t\t\t : ");scanf("%f",&nilaiIpk);     printf("Semester\t\t : ");scanf("%d",&semester);    printf("Pendapatan Orang Tua\t : ");scanf("%d",&pendapatanOrangTua);
    float cekIpk;                                     int cekSemester;                                    int cekPendapatanOrangTua;
    cekIpk = nilaiIpk >= 3.00;                        cekSemester = semester >= 5;                        cekPendapatanOrangTua = pendapatanOrangTua >= 3000000;

    if(nilaiIpk >= 3.00){
        printf("Selamat, Anda Berhak Menerima Beasiswa");
    }
    else if(semester >= 5){
        printf("Selamat, Anda Berhak Menerima Beasiswa");
    }
    else if(pendapatanOrangTua >= 3000000){
        printf("Selamat, Anda Berhak Menerima Beasiswa");
    }
    else{
        printf("Maaf Anda Belum Diterima");
    }
    puts("\n");
    system("pause");

    printf("----Menghitung Potongan Harga Dari Pembelian Cat----\n");
    int merkCat;
    int jumlahDulux, jumlahCatylac, jumlahNipponPaint, jumlahAvitex, jumlahMowilex;
    printf("1.Dulux\n");
    printf("2.Catylac\n");
    printf("3.Nippon Paint\n");
    printf("4.Avitex\n");
    printf("5.Mowilex\n");
    printf("Pilih Merk Cat : ");                scanf("%d",&merkCat);

    switch(merkCat){
    case 1:
        printf("Dulux\n");
        printf("\n");
        printf("Jumlah Cat Dulux : ");          scanf("%d",&jumlahDulux);
    if(jumlahDulux >= 1 && jumlahDulux <= 25){
        printf("Harga per Kaleng : Rp. 24.500");
    }
    else if(jumlahDulux >= 26 && jumlahDulux <= 50){
        printf("Harga per Kaleng : Rp. 23.000");
    }
    else if(jumlahDulux >= 50){
        printf("Harga per Kaleng : Rp. 22.000");
    }
    else{
        printf("Harga per Kaleng : Rp. 0");
    }
    break;

    puts("\n");
    case 2:
        printf("Catylac\n");
        printf("\n");
        printf("Jumlah Cat Catylac : ");        scanf("%d",&jumlahCatylac);
    if(jumlahCatylac >= 1 && jumlahCatylac <= 25){
        printf("Harga per Kaleng : Rp. 23.500");
    }
    else if(jumlahCatylac >= 25 && jumlahCatylac <= 50){
        printf("Harga per Kaleng : Rp. 22.500");
    }
    else if(jumlahCatylac >= 50){
        printf("Harga per Kaleng : Rp. 21.000");
    }
    else{
        printf("Harga per Kaleng : Rp. 0");
    }
    break;

    puts("\n");
    case 3:
        printf("Nippon Paint\n");
        printf("\n");
        printf("Jumlah Cat Nippon Paint : ");   scanf("%d",&jumlahNipponPaint);
    if(jumlahNipponPaint >= 1 && jumlahNipponPaint >= 25){
        printf("Harga per Kaleng : Rp.23.500");
    }
    else if(jumlahNipponPaint >= 25 && jumlahNipponPaint <= 50){
        printf("Harga per Kaleng : Rp. 22.000");
    }
    else if(jumlahNipponPaint >= 50){
        printf("Harga per Kaleng : Rp. 20.500");
    }
    else{
        printf("Harga per Kaleng : Rp. 0");
    }
    break;

    puts("\n");
    case 4:
        printf("Avitex\n");
        printf("\n");
        printf("Jumlah Cat Avitex : ");         scanf("%d",&jumlahAvitex);
    if(jumlahAvitex >= 1 && jumlahAvitex <= 25){
        printf("Harga per Kaleng : Rp. 20.000");
    }
    else if(jumlahAvitex >= 25 && jumlahAvitex <= 50){
        printf("Harga per Kaleng : Rp. 19.000");
    }
    else if(jumlahAvitex >= 50){
        printf("Harga per Kaleng : Rp.17.500");
    }
    else{
        printf("Harga per Kaleng : Rp. 0");
    }
    break;

    puts("\n");
    case 5:
        printf("Mowilex\n");
        printf("\n");
        printf("Jumlah Cat Mowilex : ");        scanf("%d",&jumlahMowilex);
    if(jumlahMowilex >= 1 && jumlahMowilex <= 25){
        printf("Harga per Kaleng : Rp. 18.500");
    }
    else if(jumlahMowilex >= 25 && jumlahMowilex <= 50){
        printf("Harga per Kaleng : Rp. 17.000");
    }
    else if(jumlahMowilex >= 50){
        printf("Harga per Kaleng : Rp. 16.000");
    }
    else{
        printf("Harga per Kaleng : Rp. 0");
    }
    break;
}
    puts("\n");
    printf("---Nota Pembelian---\n");
    char nama_pembeli [100];
    char tanggal_pembeli [100];
    char pilihMerkCat;
    int jumlahKaleng;
    int luasDindingPerKaleng;
    int jumlahKalengCatPerDinding;
    int hargaYangDibayarKonsumen, hargaPerKaleng;
    printf("Nama Pembeli                : ");fflush(stdin);gets(nama_pembeli);
    printf("Tanggal Pembeli             : ");fflush(stdin);gets(tanggal_pembeli);
    printf("Merk Cat                    : ");scanf("%s",&pilihMerkCat);
    printf("Luas Dinding per Kaleng     : ");scanf("%d",&luasDindingPerKaleng);
    printf("Jumlah Kaleng               : ");scanf("%d",&jumlahKaleng);
    printf("Harga per Kaleng            : ");scanf("%d",&hargaPerKaleng);
    jumlahKalengCatPerDinding = jumlahKaleng / luasDindingPerKaleng;
    printf("Jumlah Kaleng per Dinding   : %d\n", jumlahKalengCatPerDinding);
    hargaYangDibayarKonsumen = hargaPerKaleng * jumlahKalengCatPerDinding;
    printf("Harga Yang Dibayar Konsumen : %d\n", hargaYangDibayarKonsumen);
    system("pause");
    puts("\n");

    printf("---Contoh Kasus Percabangan Sarang---\n");
    int merkHp;
    int tipeHp, tipeHp1, tipeHp2;
    printf("1.Xiaomi\n");
    printf("2.Samsung\n");
    printf("3.Iphone\n");
    printf("Masukkan Pilihan Hp    : ");       scanf("%d",&merkHp);
    puts("\n");

    switch(merkHp){
    case 1:
        printf("Xiaomi");
        printf("\n");
        printf("1.Redmi Note 3\n");
        printf("2.Redmi Note 2\n");
        printf("3.Redmi 5s\n");
        printf("Masukkan Pilihan Tipe  : ");    scanf("%d",&tipeHp);

        if(tipeHp==1){
            printf("Redmi Note 3");
        }
        else if(tipeHp==2){
            printf("Redmi Note 2");
        }
        else if(tipeHp==3){
            printf("Redmi 5s");
        }
        else{
            printf("Tidak Ada");
        }
        break;
        puts("\n");


    case 2:
        printf("Samsung");
        printf("\n");
        printf("1.J5\n");
        printf("2.J6\n");
        printf("3.J7\n");
        printf("Masukkan Pilihan Tipe : ");    scanf("%d",&tipeHp1);

        if(tipeHp1==1){
            printf("J5");
        }
        else if(tipeHp1==2){
            printf("J6");
        }
        else if(tipeHp1==3){
            printf("J7");
        }
        else{
            printf("Tidak Ada");
        }
        break;
        puts("\n");

    case 3:
        printf("Iphone");
        printf("\n");
        printf("1.Iphone 6\n");
        printf("2.Iphone 5\n");
        printf("3.Iphone 4\n");
        printf("Masukkan Pilihan Tipe : ");    scanf("%d",&tipeHp2);

        if(tipeHp2==1){
            printf("Iphone 6");
        }
        else if(tipeHp2==2){
            printf("Iphone 5");
        }
        else if(tipeHp2==3){
            printf("Iphone 4");
        }
        else{
            printf("Tidak Ada");
        }
        break;
    }
    puts("\n");
    int warna;
    int pilihWarna;
    printf("1.Hitam\n");
    printf("2.Putih\n");
    printf("3.Coklat\n");
    printf("Masukkan Pilihan Warna : ");       scanf("%d",&warna);
    switch(warna){
    case 1:
       printf("Hitam");
       break;
    case 2:
        printf("Putih");
        break;
    case 3:
        printf("Coklat");
        break;
    default:
        printf("Tidak Ada");
        break;
    }
    puts("\n");
    printf("-----------------------------------------------------------------\n");
    printf("                    Nama : Rizki Dwi Martanto                    \n");
    printf("                    Nim  : A11.2018.11468                        \n");
    printf("-----------------------------------------------------------------\n");
    return 0;
}
