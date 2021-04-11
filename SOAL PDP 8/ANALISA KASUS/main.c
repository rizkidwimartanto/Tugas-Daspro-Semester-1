#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jawab, i, lagi, Benar;
for(i = 1; i < 11; i++) { // Kurang tanda kurung kurawal penutup
printf(" %d + %d = ", i , i);
scanf("%d", &jawab); // menginputkan jawaban dari penjumlahan

if(jawab == i + i) // jika jawaban hasilnya benar maka akan di cetak benar
printf("Benar! \n");

else // tidak memakai kurung kurawal juga bisa
printf("Salah. \n"); // jika jawaban hasilnya salah maka akan di cetak salah dan coba lagi
printf("Coba Lagi ?. \n");
Benar = 0;
 // dari semua penjumlahan akan diteruskan sampai penjumlahan ke 10

/* nested for */
for(lagi = 0; lagi < 3 && !Benar; lagi++) { // jika hasil salah 3 kali maka akan dibetulkan hasil jawaban yang benar
printf(" %d + %d = ", i, i);
scanf("%d", &jawab);
if(jawab == i + i) {
printf("Benar! \n");

}
/* Jika jawaban masih Salah, beri tau user
*/ else
printf("Jawabnya adalah %d. \n", i + i);
Benar = 1;
}

}
    return 0;
}
