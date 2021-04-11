#include <stdio.h>
#include <stdlib.h>

int main()
{
        int matriksA [5] [5]=
    {
        {25,24,23,22,21},
        {20,19,18,17,16},
        {15,14,13,12,11},
        {10,9,8,7,6},
        {5,4,3,2,1}
    };
        int matriksB [5] [5]=
    {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
    if (matriksA == matriksB){
        printf("Output : Matriks A sama dengan Matriks B\n");
    }
    else{
        printf("Output : Matriks A tidak sama dengan Matriks B\n");
    }
    return 0;
}
