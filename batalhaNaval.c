#include <stdio.h>
#define navio 3

int main(){

    int i, j;
    char letra = 'A';
    int tabuleiro[10][10] = {0};

    printf("TABULEIRO BATALHA NAVAL \n");

    //posicionamento das letras
    printf(" ");
    printf(" ");
    for (i = 0; i < 10; i++) 
    {
        printf("%c ", letra);
        letra++;
    }

    printf("\n");

    //diagonal
    for (i = 0; i < 2; i++) 
    { 
        tabuleiro[i + 5][i + 5] = navio;
    }

    for (i = 0; i < 3; i++) 
    { 
        tabuleiro[i + 4][4 - i] = navio;
    }

    //posicionamento dos números
    for (j = 0; j < 10; j++) 
    {
        printf("%d ", j + 1); // impressão das linhas de 1 a 10
        //impressão do tabuleiro
        for (i = 0; i < 10; i++) 
        {
            printf("%d ", tabuleiro[i][j]); //Exibindo o tabuleiro
        }
        printf("\n");
    }
    
    return 0;
}

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
