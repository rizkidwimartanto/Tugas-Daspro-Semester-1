#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e, f;
    a = 11, b = 12, c = 13, d = 14, e = 15, f = 16;
    while(a <= 61 && b <= 62 && c <= 63 && d <= 64 && e <= 65 && f <= 66){
        if ((a == 11 || a >= 61 && a < 20 || a % 10 == 1)&&
            (b == 12 || b >= 62 && b < 20 || b % 10 == 2)&&
            (c == 13 || c >= 63 && c < 20 || c % 10 == 3)&&
            (d == 14 || d >= 64 && d < 20 || d % 10 == 4)&&
            (e == 15 || e >= 65 && e < 20 || e % 10 == 5)&&
            (f == 16 || f >= 66 && f < 20 || f % 10 == 6)){
        printf("%d  %d  %d  %d  %d  %d \n", a, b, c, d, e, f);
        }a++, b++, c++, d++, e++, f++;
    }
    return 0;
}