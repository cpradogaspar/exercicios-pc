#include <stdio.h>

int main(){

    //declara as variaveis a serem utilizadas
    int digitado;
    int somadivisivel=0;

    //recebe o numero de convidados
    scanf("%d",&digitado);

    //verifica se os convidados recebeu um valor invalido
    if(digitado<=0){
        printf("Numero invalido de pessoas para formacao de fileiras.");
    } else {
        //caso seja valido inicia um for que finaliza quando o contador for igual ao numero de convidados
        for(int i=1;i<=digitado;i++){
            //se o resto da divisao do n. de convidados for zero entao adiciona um ao numero de formas de separacao dos convidados
            somadivisivel = digitado%i == 0 ? somadivisivel+1 : somadivisivel;
        }
        //imprime o resultado na tela
        printf("Eh possivel organizar as cadeiras de %d formas diferentes.",somadivisivel);

    }
    
    return(0);
}