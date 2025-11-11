#include <stdio.h>

//

int main() {

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

    // Movendo a peça Cavalo 2 casa para baixo e 1 casa para esquerda

    int movimentoCavalo = 1;

    while (movimentoCavalo--){

        for(int c = 0; c < 2; c++){
            printf("Cavalo Baixo \n");
        }
        printf("Cavalo Esquerda \n");
    }

    printf("Rodada encerrada, aguardando próximo jogador...\n");

    return 0;
}