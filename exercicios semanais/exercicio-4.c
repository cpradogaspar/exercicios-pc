#include <stdio.h>

int main(){
    // declara as variaveis que serao utilizadas
    int m, g, sm, sc, h, isValid = 1;
    //variavel que armazena a vantagem inicial zerada
    int v = 0;

   // Leitura dos dados
    scanf("%d %d %d %d %d", &m, &g, &sm, &sc, &h); 

    // Verifica cada valor permitido para mistura
    switch(m){
        case 1: 
            v += 0;
            break;
        case 2:
            v += 1;
            break;
        case 3:
            v += 0;
            break;
        case 4:
            v += -1;
            break;  
        case 5:
            v += -1;
            break;
        default:
            if(isValid == 1){
                printf("O identificador %d nao eh uma mistura valida...",m);
            }
            isValid = 0;
            break;
    }

    // Verifica cada valor permitido para guarnicao
    switch(g){
        case 1: 
            v += 1;
            break;
        case 2:
            v += 1;
            break;
        case 3:
            break;
        case 4:
            v += -1;
            break;  
        case 5:
            break;
        default:
            if(isValid == 1){
                printf("O identificador %d nao eh uma guarnicao valida...",g);
            }
            isValid = 0;
            break;
    }

    // Verifica cada valor permitido para sobremesa
    switch(sm){
        case 1: 
            v += 1;
            break;
        case 2:
            v += 1;
            break;
        case 3:
            v += -1;
            break;
        case 4:
            break;
        case 5:
            v += -1;
            break;
        default:
            if(isValid == 1){
                printf("O identificador %d nao eh uma sobremesa valida...",sm);
            }
            isValid = 0;
            break;
    }

    // Verifica cada valor permitido para suco
    switch(sc){
        case 1: 
            v += 1;
            break;
        case 2:
            break;
        case 3:
            v += -1;
            break;
        default:
            if(isValid == 1){
                printf("O identificador %d nao eh um suco valido...",sc);
            }
            isValid = 0;
            break;
    }

    // Verifica se nenhum dos valores acima era invalido antes de continuar
    if(isValid == 1){
        // Verifica cada valor permitido para horario
        // e calcula a vantagem final
        switch(h){
            case 1:
                //verifica se a vantagem eh maior que 0 no caso do almoço
                if(v>=0){
                    printf("Compensa bandecar. A vantagem eh de %d.",v);
                }
                else{
                    printf("Nao compensa bandecar. A vantagem eh de %d.",v);
                }
                break;
            case 2:
                //verifica se a vantagem eh maior que 1 no caso da janta
                if(v>1){
                    printf("Compensa bandecar. A vantagem eh de %d.",v);
                }
                else{
                    printf("Nao compensa bandecar. A vantagem eh de %d.",v);
                }
                break;
            default:
                printf("O identificador %d nao eh um horario valido...",h);
                break;
        }
    }
    return 0;
}