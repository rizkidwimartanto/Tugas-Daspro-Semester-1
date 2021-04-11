#include <stdio.h>
#include <stdlib.h>

int main()
{
    int baris, kolom, bintang;
    for (baris = 1; baris <= 5; baris++){
        for (kolom = 1; kolom <= baris; kolom++){
            printf(" ");
        }
        for (bintang = 5; bintang >= baris; bintang--){
            printf("*");
        }
        puts("\n");
    }
    return 0;
}
