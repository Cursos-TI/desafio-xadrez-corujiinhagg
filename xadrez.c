#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {
printf("DESAFIO XADREZ \n\n");

// Movendo a torre 5 casas para direita 
    for ( int t = 0 ; t < 5 ; t++ ){
        printf("Torre Direita \n");
    }

    
    // Movendo Bispo 5 casas diagonal para cima - direita

    int b = 0;

    while( b < 5 ){
        
        printf("Bispo Cima - Direita \n");
        b++;
    }
    
    // Movendo Rainha 8 casas para esquerda

    int r = 0;

    do {
        printf("Rainha Esquerda \n");
        r++;

    } while ( r < 8 );

    printf("Rodada encerrada, aguardando próximo jogador...\n");


    return 0;
}
