#include <stdio.h>
#include <stdlib.h>

int main()
{
''    int x, y, hasil;
    printf("Input Base     : ");        scanf("%d", &x);
    printf("Input Exponent : ");        scanf("%d", &y);
    hasil = pow(x,y);
    printf("%d ^ %d = %d",x, y, hasil);
    return 0;
}
