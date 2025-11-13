#include <stdio.h>

void moverTorre(int casas){
    if(casas > 0){
        printf("Torre Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas){
    if(casas > 0){
        printf("Bispo Cima - Direita\n");
        moverBispo(casas - 1);
    }
}

void moverRainha(int casas){
    if(casas > 0){
        printf("Rainha Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main() {

    // Movendo Torre, Bispo e Rainha com Recursividade
    moverTorre(5);
    moverBispo(5);
    moverRainha(8);

    /* Movendo a torre 5 casas para direita com loop
    for ( int t = 0 ; t < 5 ; t++ ){
        printf("Torre Direita \n");
    }*/
    
    /* Movendo Bispo 5 casas diagonal para cima - direita com loop

    int b = 0;

    while( b < 5 ){
        
        printf("Bispo Cima - Direita \n");
        b++;
    } */

    /* Movendo Rainha 8 casas para esquerda com Loop

    int r = 0;

    do {
        printf("Rainha Esquerda \n");
        r++;

    } while ( r < 8 ); */


    // Movendo a peça Cavalo 2 casa para baixo e 1 casa para esquerda com Loop

    int movimentoCavalo = 1;

    while (movimentoCavalo--){

        for(int c = 0; c < 2; c++){
            printf("Cavalo Cima\n");
        }
        printf("Cavalo Direita\n");
    }

    printf("Rodada encerrada, aguardando próximo jogador...\n");

    return 0;
}