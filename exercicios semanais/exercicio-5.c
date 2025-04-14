#include <stdio.h>

int main(){

    //declara as variaveis a serem utilizadas
    float media,digitado, somanotas;
    int contador;

    //comeca com a soma e contador no valor zero
    somanotas = 0;
    contador = 0;

    //enquanto o numero digitado for maior que -1
    while(digitado>=0){
        //Recebe o valor do usuário
        scanf("%f",&digitado);
        //como o usuario pode ter colocado um numero negativo nesse ponto
        //a soma e o contador só serão somados caso o n digitado nao seja negativo
        if(digitado>=0){
            somanotas += digitado;
            contador++;
        }
    }

    //se o contador for maior que zero faz a conta da media, senao continua 0
    media = contador>0 ? somanotas/contador : 0;
    //imprime o resultado na tela
    printf("A media aritmetica do aluno eh %.2f",media);

    return(0);
}