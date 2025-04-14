#include <stdio.h>

int main(){
    // declara as variaveis que serao utilizadas
    int diaatual,diadesejado,resultado;

    // Leitura dos dados
    scanf("%d", &diaatual); 
    scanf("%d", &diadesejado); 

    // Verifica se o dia atual esta dentro do intervalo de 1 a 7
    if(diaatual>0 && diaatual<=7){
        // Verifica se o valor de dias a ser somado é positivo
        if(diadesejado>=0){
            // obtem o dia da semana que sera apos a passagem dos dias com o resto da divisao
            resultado = (diadesejado + diaatual) % 7;
            switch(resultado){
                case 1:
                    printf("Domingo\n");
                    break;
                case 2:
                    printf("Segunda-feira\n");
                    break;
                case 3:
                    printf("Terca-feira\n");
                    break;
                case 4:
                    printf("Quarta-feira\n");
                    break;
                case 5:
                    printf("Quinta-feira\n");
                    break;
                case 6:
                    printf("Sexta-feira\n");
                    break;
                case 0:
                    printf("Sabado\n");
                    break;
                default:
                    break;
            }
        } else {
            // valor de dias passados é negativo
            printf("Nao eh possivel voltar ao passado\n");
        }
    } else {
        // dia atual fora do intervalo de 1 a 7
        printf("Este dia da semana nao existe\n");
    }
    
    return 0;
}