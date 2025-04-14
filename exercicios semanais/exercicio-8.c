#include <stdio.h>

//O codigo verifica se o numero digitado eh palindromo, ou seja é igual de tras para frente
int main(){
    //declara a variavel que guarda o numero que o usuario digitar, o numero que sera usado para guardar o resto da divisao, e o numero contrario
    int numero,novonumero,numerocontrario;
    //declara listas que guardarao os numeros separados
    int digitos[15], digitoscontrario[15];

    //escaneia o numero digitado
    scanf("%d",&numero);

    //se o numero for positivo prossegue com o calculo
    if(numero>=0){
        //index a ser usado para acessar elementos da lista
        int index = 0;
        //iguala o numero digitado a variavel novonumero
        novonumero = numero;
        //para cada iteracao, o numero digitado é dividido por dez e o resto da divisao devolve o ultimo numero do inteiro. entao o numero eh armazenado no array
        for(int contador=numero;contador>0;contador/=10){
            digitos[index] = novonumero%10;
            novonumero/=10;
            index++;
        }

        //for para pegar o array criado e transformar no numero inteiro ao contrario
        for(int a=0;a<index;a++){
            numerocontrario = numerocontrario * 10 + digitos[a];
        }

        index = 0;
        novonumero = numerocontrario;
        //aqui as iteracoes sao feitas para transformar o numero ao contrario tambem em um array
        for(int contador=numerocontrario;contador>0;contador/=10){
            digitoscontrario[index] = novonumero%10;
            novonumero/=10;
            index++;
        }

        //variavel pseudo boleana que diz se o numero eh palindromo (1) ou nao (0). inicia zero
        int ispalindromo = 0;

        //aqui é feito um for que acaba quando o contador c for igual ao numero de elementos nos arrays
        //cada iteracao verifica se os elementos das duas listas sao iguais no index definido
        //se em alguma iteracao os numeros nao forem iguais, sai do loop
        for(int c=0;c<index;c++){
            ispalindromo = digitos[c] == digitoscontrario[c] ? 1 : 0;
            if(ispalindromo==0) break;
        }

        //imprime a mensagem a depender do resultado
        if(ispalindromo==1){
            printf("%d eh um palindromo.",numero); 
        } else {
            printf("%d nao eh um palindromo.",numero);
        }
        
    } else{
        //mensagem caso o numero seja negativo
        printf("O numero nao pode ser negativo.");
    }
    
}
