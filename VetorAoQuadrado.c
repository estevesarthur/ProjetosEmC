#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo seus valores ao usuário.
Em seguida, calcular esse vetor ao quadrado de cada elemento do vetor. Por fim, imprimir ambos os vetores na tela.
*/

int main()
{

    // Declaração das variaveis
    int i, vetor1[10], vetor2[10];

    // primeiro for para pedir ao usuário digitar os 10 valores dizendo para ele qual é o vetor que está digitando para evitar que se perca
    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &vetor1[i]);
    }

    //for para fazer o quadrado do vetor 1. Ele vai ler o que foi digitado e multiplicar por ele mesmo e slaver no vetor2
    for (i = 0; i < 10; i++)
    {
        vetor2[i] = vetor1[i] * vetor1[i];
    }

    //mostrar os  número digitados no vetor1 e mostrar em tela
    printf("\nVetores do Vetor1: ");
    for (i = 0; i < 10; i++)
    {
        printf("%3d ", vetor1[i]);
    }

    //mostrar os  número digitados no vetor2 e mostrar em tela
    printf("\nVetores do Vetor1: ");
    for (i = 0; i < 10; i++)
    {
        printf("%3d ", vetor2[i]);
    }

    return 0;
}