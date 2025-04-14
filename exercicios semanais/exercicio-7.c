#include <stdio.h>


//funcao que recebe numero e devolve se ele é primo de forma pseudo boleana
int eh_numero_primo(int n) {
    //para numeros menores que dois ou divisivel por zero, retorna false
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    //se o numero for divisivel por algo diferente de 1, retorna false
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    //se chegou aqui retorna true
    return 1;
}

int main(){
    //declara a variavel que guarda o numero que o usuario digitar
    int input;

    //escaneia o numero digitado
    scanf("%d",&input);

    //se o input for maior que dois, realiza a contagem
    if(input>=2){
        //cria contador igual a 2 e aumenta ate ser maior do que o valor do input
        for(int contador=2;contador<=input;contador++){
            //chama funcao que verifica se o numero digitado eh primo (1=sim, 0=nao)
            int primo = eh_numero_primo(contador);
            if(primo==1){
                //se o numero atual for primo, mostra na tela
                printf("%d ",contador);
            }
        }
    } else {
        //se input nao for maior que dois mostra mensagem de erro
        printf("Nao pode numero menor que 2.");
    }
    
}
