#include <stdio.h>
#include <stdbool.h>
/*
**    Função : Encontrar Números Felizes:
**    Autor : Rodrigo Lucas
**    Data  : 01/04/2024
**    Observações: Utilização de um array para rastrear números visitados.
*/

int soma_quadrados_digitos(int num) {
    int soma = 0;
    while (num > 0) {
        int digito = num % 10;
        soma += digito * digito;
        num /= 10;
    }
    return soma;
}

bool eh_numero_feliz(int num) {
    int visitados[1000] = {0}; 
    while (num != 1 && !visitados[num]) {
        visitados[num] = 1;
        num = soma_quadrados_digitos(num);
    }
    return num == 1;
}

int main() {
    int n;
    printf("Digite um número para verificar se é feliz: ");
    scanf("%d", &n);
    
    if (eh_numero_feliz(n)) {
        printf("%d é um número feliz.\n", n);
    } else {
        printf("%d não é um número feliz.\n", n);
    }
    
    return 665;
}
