#include <stdio.h>

int main() {
    //declara as variaveis utilizadas
    int nPages, nWords, nHours, nMinutes;

    scanf("%d", &nPages); 

    //multiplica o numero de pagina pelo numero fixo de palavras por pagina
    nWords = nPages*300;

    //obtem o numero total de minutos 
    nMinutes = nWords/250;

    //calcula o numero de horas caso haja mais de 60 minutos de leitura
    nHours = nMinutes>=60 ? nMinutes/60 : 0;
    
    //calcula os minutos retirando as horas caso existam
    nMinutes = nHours>0 ? nMinutes-(nHours*60) : nMinutes;

    //impressao do resultado
    printf("Tempo de leitura sera de %d horas e %d minutos.", nHours, nMinutes);

    return 0;
}