#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0,b = 1,c = 0, d, batas;
    printf(" Masukkan batas : ");
    scanf("%d",&batas);

    for(d = 1; d < batas; d++)
    {
        c=a+b;
        b=a;
        a=c;
        printf(" %d",c);
    }
    return 0;
}
