#include <stdio.h>
#define navio 3
#define linha 10
#define coluna 10
#define cone 3

int main(){

    int i, j;
    int limite;
    char letra = 'A';
    int tabuleiro[linha][coluna] = {0};

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
    
    //cone
    limite = coluna / 4;
    for (i = 0; i < cone; i++) 
    {
        for (j = -i; j <= i; j++) 
        {
            if (limite + j >= 0 && limite + j < coluna) 
            {
                tabuleiro[i + 0][limite + j] = navio; 
            }
        }
    }

    //Cruz
    tabuleiro[4][limite] = navio;

    for (int j = -2; j <= 2; j++) 
    {
        tabuleiro[5][limite + j] = navio;
    }
    
    tabuleiro[6][limite] = navio;

     //Octaedro
     limite = coluna / 2 + 2;
     tabuleiro[4][limite] = navio;

     for (int j = -1; j <= 1; j++) 
     {
         tabuleiro[5][limite + j] = navio;
     }
     
     tabuleiro[6][limite] = navio;

    //posicionamento dos números
    for (j = 0; j < linha; j++) 
    {
        printf("%d ", j + 1); // impressão das linhas de 1 a 10
        //impressão do tabuleiro
        for (i = 0; i < coluna; i++) 
        {
            printf("%d ", tabuleiro[j][i]); //Exibindo o tabuleiro
        }
        printf("\n");
    }
    
    return 0;
}