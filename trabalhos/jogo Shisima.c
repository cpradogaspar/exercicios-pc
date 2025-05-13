#include <stdio.h>

typedef struct jogador {
    int posicao1,posicao2,posicao3;
} jogador;

void imprimir_tabuleriro(jogador player[],int jogada){
    if (jogada!=0) printf("****************** Jogada Nº %d*********************\n",jogada);
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
    //printf("************************************************\n");
    return;
}

int ha_vencedor(jogador player[]){
    int vencedor = 0;
    if(player[0].posicao1==1 && player[0].posicao2==2 && player[0].posicao3==3){
        vencedor = 1;
    } else if(player[0].posicao1==3 && player[0].posicao2==2 && player[0].posicao3==1){
        vencedor = 1;
    } else if(player[1].posicao1==7 && player[1].posicao2==8 && player[1].posicao3==9){
        vencedor = 2;
    } else if(player[1].posicao1==9 && player[1].posicao2==8 && player[1].posicao3==7){
        vencedor = 2;
    }
    return vencedor;
}

int main(){
    jogador player[2];
    player[0].posicao1=7;
    player[0].posicao2=8;
    player[0].posicao3=9;

    player[1].posicao1=1;
    player[1].posicao2=2;
    player[1].posicao3=3;

    int jogadas = 0;

    imprimir_tabuleriro(player,jogadas);

    int vencedor = 0;
    int jogador_atual = 1;
    jogadas++;
    do{
        //debug
        if(jogador_atual==2){
            player[1].posicao1=9;
            player[1].posicao2=5;
            player[1].posicao3=4;

            player[0].posicao1=1;
            player[0].posicao2=2;
            player[0].posicao3=3;
        }
        imprimir_tabuleriro(player,jogadas);
        jogador_atual = jogador_atual==1 ? 2 : 1;
        vencedor = ha_vencedor(player);
        jogadas++;
    } while(vencedor==0 && jogadas<=30);

    printf("O vencedor foi o jogador %d",vencedor);
}


