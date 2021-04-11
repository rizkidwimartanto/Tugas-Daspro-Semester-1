#include <stdio.h>
#include <stdlib.h>

int main()
{
///Analisa Kesalahan
    /* kamus */
int Celcius;
int CeltoFah;
int CeltoKel;
int CeltoRea;
printf("Masukkan Jumlah Celcius\t\t\t\t: ");
scanf("%i",&Celcius);
    /* Program */
CeltoFah= 1.8 * Celcius + 32;
CeltoKel= Celcius +273;
CeltoRea= 0.8 * Celcius;
printf("Dalam Skala Celcius menunjukkan\t\t\t: %i derajat\n",Celcius);
printf("Bila dikonversi menjadi Fahrenheit menjadi\t: %i derajat\n",CeltoFah);
printf("Bila dikonversi menjadi Reamur menjadi\t\t: %i derajat\n",CeltoRea);
printf("Bila dikonversi menjadi Kelvin menjadi\t\t: %i derajat\n\n",CeltoKel);

///OPERATOR ARITMATIKA
float vt, vo, t, x, rumus;
printf("Masukan Kelajuan\t\t\t\t: ");
scanf("%f",&vt);
printf("Masukan Kecepatan_Awal\t\t\t\t: ");
scanf("%f",&vo);
printf("Masukan Waktu\t\t\t\t\t: ");
scanf("%f",&t);
printf("Masukan Percepatan\t\t\t\t: ");
scanf("%f",&x);
rumus = (vt - vo) / t;
printf("Hasil Percepatan vt = vo + a * t\t\t: %f\n\n",rumus);

///ANALISA LOGIKA DAN ARITMATIKA
int jam_masuk, kehadiran_mahasiswa, keterlambatan, selisih_waktu;
jam_masuk = 9 * 3600 + 40 * 60;
kehadiran_mahasiswa = 10 * 3600 + 5 * 60;
selisih_waktu = kehadiran_mahasiswa - jam_masuk;
printf("Jam Masuk\t\t                        : 9 * 3600 + 40 * 60 = %d s \n",jam_masuk);
printf("Kehadiran Mahasiswa\t\t\t        : 10 * 3600 + 5 * 60 = %d s \n",kehadiran_mahasiswa);
printf("Selisih Waktu Keterlambatan\t\t\t: 36.300 - 34800     = %d  s \n\n",selisih_waktu);


printf("===============================================================================\n");
printf("                      RIZKI DWI MARTANTO                                       \n");
printf("                      A11.2018.11468                                           \n");
printf("===============================================================================\n");
    return 0;
}
