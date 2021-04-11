#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    for (a = 0; a < 10; a++)
    {
        for (b = 0; b < 10; b++)
        {
            if (a==b || a==(10-b-1)){
                printf(" *");
            }
            else{
                printf(" ");
            }
        }
    printf("\n");
    }
    return 0;
}
