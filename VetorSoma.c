#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Fazer um programa que some dois vetores de tamanho 25 e guarde o resultado em um terceiro vetor. no final imprima todos os vetores.
*/

int main()
{
    int i, vetor1[25], vetor2[25], vetor3[25];

    srand(time(NULL));

    for (i = 0; i < 25; i++)
    {
        vetor1[i] = rand() % 1000;
        vetor2[i] = rand() % 1000;
    }

    for (i = 0; i < 25; i++)
    {
        vetor3[i] = vetor1[i] + vetor2[i];
    }

    printf("\nVetores do Vetor1: ");
    for (i = 0; i < 25; i++)
    {
        printf("%5d ", vetor1[i]);
    }

    printf("\nVetores do Vetor2: ");
    for (i = 0; i < 25; i++)
    {
        printf("%5d ", vetor2[i]);
    }

    printf("\nVetores do Vetor3: ");
    for (i = 0; i < 25; i++)
    {
        printf("%5d ", vetor3[i]);
    }

    return 0;
}