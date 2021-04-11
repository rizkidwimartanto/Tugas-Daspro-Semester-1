#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y [10] = {1, 2, 3, 4, 5 ,6 ,7 ,8 ,9, 10};
    for (x = 0; x <= 9; x++){
    printf("Array %d : %d\n", x, y [x]);
    }

    puts("\n");
    int a;
    float b [10] = {1.5, 2.0, 2.5, 3.0, 4.0, 4.5, 5.0, 5.5, 6.0, 6.5};
    for (a= 0; a <= 9; a++){
    printf("Array %d : %f\n", a, b [a]);
    }

    puts("\n");
    int i;
    char j [10] = "AKUGANTENG";
    printf("%s\n", j);
    for (i = 0; i <= 9; i++){
    printf("Array %d : %c\n", i, j [i]);
    }
    return 0;
}
