#include <stdio.h>

int main(){
    int array[5];
    int i;

    for (i = 0; i<5; i++){
        array[i] = i * 2;
    }

    for (i = 0; i < 5; i++){
        printf("Array[%d] = %d\n", i, array[i]);
    }

    return 0;
}