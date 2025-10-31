#include <stdio.h>

int main(){
    int contador = 0;
    char tecla;

    printf("Contador de cliques\n");
    printf("PRESSIONE ENTER PARA CONTAR, OU 'Q' PARA SAIR\n");

    while(1){
        tecla == getchar();
        if(tecla == 'q') break;
        contador++;
        printf("cliques: %d\n", contador);
    }
    printf("Total de cliques: %d",contador);
    return 0;

}
