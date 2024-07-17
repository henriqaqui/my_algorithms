def bubblesort(vetor):
    """Proposta de solução de implementação do algoritmo BubbleSort"""

    #fim recebe o índice do último elemento do vetor
    fim = len(vetor) - 1

    #recebe 1 apenas para entrar no while
    continua = 1

    while continua:
        continua = 0
        
        i = 0
        while i < fim:
            if vetor[i] > vetor[i + 1]:
                temp = vetor[i]
                vetor[i] = vetor[i + 1]
                vetor[i + 1] = temp

                continua = i
            
            i += 1
        
        #fim recebe o índice de onde ocorreu a última troca
        fim = continua


if __name__ == '__main__':
    from random import randint

    #gera vetor de tamanho e itens aleatórios
    vetor = [randint(0,100) for _ in range(randint(10, 30))]

    print(f'VETOR FORA DE ORDEM:\n{vetor}')
    bubblesort(vetor)
    print(f'VETOR ORDENADO:\n{vetor}')
