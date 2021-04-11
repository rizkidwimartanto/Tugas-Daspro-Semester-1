#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c = 1;
    do{
        printf("Perulangan ke %d\n",c);//statement yang akan diulang
        c++;//update nilai
    }
    while(c <= 7);
    return 0;
}
