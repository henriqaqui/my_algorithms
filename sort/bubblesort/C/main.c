#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bubbleSort.h"

#define SIZE 100

void geraArray(int array[], const int size);
void printArray(const int array[], const int size);

int main(void)
{
    srand(time(NULL));

    int array[SIZE];
    
    geraArray(array, SIZE);
    printArray(array, SIZE);
    bubbleSort(array, SIZE);
    printArray(array, SIZE);
}


void geraArray(int array[], const int size)
{
    /*Preenche array com inteiros aleatórios entre 0 e 1000*/
    for(int i = 0; i < SIZE; i++) {
        array[i] = rand() % 1000;
    }
}


void printArray(const int array[], const int size)
{
    for(int i = 0; i < size; i++) {
        printf("%3d ", array[i]);
        if((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
    printf("\n");
}
