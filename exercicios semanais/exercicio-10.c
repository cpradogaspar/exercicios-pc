#include <stdio.h>

// define o novo tipo Veiculo com os seguintes atributos
typedef struct veiculo{
    int cod_veiculo;
    int categoria;
    int velocidade_final;
} veiculo;

//funcao para imprimir mensagem de erro em diversos casos
void imprime_erro(){
    printf("identificador, categoria ou velocidade invalida...");
}

int main(){
    //define a variavel que armazena o numero de veiculos que o usuario deseja cadastrar
    int num_veiculos;
    scanf("%d",&num_veiculos);

    //se o numero de veiculos for maior que zero, prossegue
    if(num_veiculos>0){

        //declara lista do tipo veiculo com o numero inteiro preenchido pelo usuario
        veiculo v[num_veiculos];

        //declara variavel que controla se a categoria dos veiculos que vao ser cadatrados sao validos. Comeca 1
        int valido = 1;

        //comeca laco que termina quando o contador for igual ao numero maximo de veiculos
        for(int i=0; i<num_veiculos; i++){
            //le os valores que o usuario colocou para o veiculo atual
            scanf("%d %d %d", &v[i].cod_veiculo, &v[i].categoria, &v[i].velocidade_final);

            // Verifica se a categoria eh valida
            if(v[i].categoria < 1 || v[i].categoria > 3){
                valido = 0;
            }

            if(v[i].cod_veiculo<1 || v[i].velocidade_final<1){
                imprime_erro();
                return 0;
            }

            // Verifica se o codigo do veiculo ja foi cadastrado
            for(int j=0; j<i; j++){
                if(v[i].cod_veiculo == v[j].cod_veiculo){
                    printf("identificador repetido...");
                    return 0;
                }
            }
        }

        //caso nenhum veiculo tenha a categoria invalida, prossegue
        if(valido){
            // Ordena por velocidade_final (do maior para o menor)
            for(int i = 0; i < num_veiculos - 1; i++){
                for(int j = 0; j < num_veiculos - i - 1; j++){
                    if(v[j].velocidade_final < v[j+1].velocidade_final){
                        veiculo temp = v[j];
                        v[j] = v[j+1];
                        v[j+1] = temp;
                    }
                }
            }

            // Impressao dos 3 mais rapidos, colocando zero caso o tamanho de veiculos seja menor que o numero do podio (3)
            for(int i = 0; i < 3; i++){
                if (i < num_veiculos) {
                    printf("%d ", v[i].cod_veiculo);
                } else {
                    printf("0 ");
                }
            }

            //define variaveis que guardarao o codigo do veiculo mais rapido da categoria. Comeca zero
            int carro_rapido = 0;
            int moto_rapida = 0;
            int f_um = 0;

            // Define contador n para os loops a seguir
            int n = 0;

            // Procura o primeiro veiculo da lista que tem a categoria igual a 1. 
            // Termina quando o contador n for igual ao numero maximo de veiculos
            do{
                carro_rapido = v[n].categoria==1 ? v[n].cod_veiculo : 0;
                n++;
            } while(carro_rapido==0 && n<num_veiculos);

            // Faz o mesmo processo do loop acima, mas procurando a categoria moto (2)
            n = 0;
            do{
                moto_rapida = v[n].categoria==2 ? v[n].cod_veiculo : 0;
                n++;
            } while(moto_rapida==0 && n<num_veiculos);

            // Faz o mesmo processo do loop acima, mas procurando a categoria f1 (3)
            n = 0;
            do{
                f_um = v[n].categoria==3 ? v[n].cod_veiculo : 0;
                n++;
            } while(f_um==0 && n<num_veiculos);

            // Imprime o resultado do veiculo mais rapido por categoria
            printf("\nCarro: %d", carro_rapido);
            printf("\nMoto: %d", moto_rapida);
            printf("\nF1: %d", f_um);
        } else {
            imprime_erro();
        }
    }
    return 0;
}