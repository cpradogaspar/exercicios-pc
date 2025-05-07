#include <stdio.h>

typedef struct jogador {
    int posicao1,posicao2,posicao3;
} jogador;

void imprimir_tabuleriro(jogador player[]){
    for (int i = 1; i < 10; i++) {
        int jogador_em_posicao = -1;  
        for (int j = 0; j < 2; j++) {
            if (i == player[j].posicao1 || i == player[j].posicao2 || i == player[j].posicao3) {
                jogador_em_posicao = j;
            }
        }
    
        if (jogador_em_posicao == -1) {
            printf("%d ", i);
        } else {
            const char* icone_jogador = jogador_em_posicao == 0 ? "O" : "X";
            printf("%s ", icone_jogador);
        }
    
        if (i % 3 == 0) {
            printf("\n");
        }
    }
    return;
}

int main(){
    jogador player[2];
    player[0].posicao1=7;
    player[0].posicao2=8;
    player[0].posicao3=9;

    player[1].posicao1=1;
    player[1].posicao2=2;
    player[1].posicao3=3;

    imprimir_tabuleriro(player);
}


