#include <stdio.h>
#include "locale.h"

int main() {
    int n1, n2, n3, numero, cont;
    char repeticao;
    do {
        repeticao = ' ';
        n1 = 0, n2 = 1, n3 = 0, cont = 0;
        printf("Digiter um numero, e checarei se pertence a sequencia de Fibonacci: ");
        fflush(stdin);
        scanf("%d", &numero);
        while (numero != n3 && numero > n3){
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
            cont+=1;
        }
        if(numero == n3){
            printf("O numero %d pertence a sequencia de Fibonacci, localizado na %d posicao.\n", numero, cont);
        } else{
            printf("O numero %d nao pertence a sequencia de Fibonacci.\n", numero);
        }
        do {
            printf("Deseja checar outro numero? [S/N]");
            fflush(stdin);
            scanf("%c", &repeticao);
            if (repeticao != 'S' && repeticao != 's' && repeticao != 'n' && repeticao != 'N'){
                printf("Opcao invalida.\n");
            }
        } while (repeticao != 'S' && repeticao != 's' && repeticao != 'n' && repeticao != 'N');
    } while (repeticao != 'N' && repeticao != 'n');
    return 0;
}
