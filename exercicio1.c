#include <stdio.h>

int main() {
    int pcDesconto;
    float precoInicial, precoFinal, vlDesconto;

    scanf("%f", &precoInicial); 

    scanf("%d", &pcDesconto); 

    precoFinal = (precoInicial * pcDesconto )/ 100;
    vlDesconto = precoInicial - precoFinal;

    printf("O valor do produto com o desconto sera de %f reais e o valor descontado foi de %f reais.\n", vlDesconto,precoFinal);

    return 0;
}