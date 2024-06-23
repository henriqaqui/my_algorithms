#include "bubbleSort.h"

void bubbleSort( int vetor[], const int size)
{
    int fim = size - 1; //posição do último array
    int continua; //índice em que houve a última troca
    
    do {
        continua = 0;

        for(int i = 0; i < fim; i++) {
            if(vetor[i] > vetor[i+1]) {
                troca(&vetor[i], &vetor[i + 1]);
                continua = i;
            }
        }

        fim = continua;
    }while(continua != 0);
}


void troca(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}
