#include <stdio.h>
#include <stdlib.h>

/*
Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela.
Em seguida, troque o 1º elemento com o último, o 2º com o penúltimo, e assim até 0 10º com o 11º. Imprima o vetor N modificado.
Não é para por em ordem decrescente e sim verificar habilidade para realizar trocas
*/

int main()
{

    int i, fim = 19, copia, vetor[20];

    for (i = 0; i < 20; i++)
    {
        printf("Digite %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Tem que imprimir antes de fazer as trocas. Vai impimir os números digitados do código acima
    printf("\nVetor Inicial: ");
    for (i = 0; i < 20; i++)
    {
        printf("%2d ", vetor[i]);
    }

    for (i = 0; i < 10; i++)
    {
        // fazer a cópia do elemento
        copia = vetor[i];
        // colocando o vetor do início no último elemento
        vetor[i] = vetor[fim];
        // agora colocar no fim o primeiro elemento
        vetor[fim] = copia;
        // tirar o fim do 19 para o 18 e assim
        fim--;
    }

    // Vai imprimir os número modificados pelo for acima
    printf("\nVetor Modificado: ");
    for (i = 0; i < 20; i++)
    {
        printf("%2d ", vetor[i]);
    }

    return 0;
}