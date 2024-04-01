#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
**    Função : Encontrar Número Automórfico:
**    Autor : Rodrigo Lucas
**    Data  : 01/04/2024
**    Observações: Verifica se n é maior que 1 para ser um número automórfico.
*/

int eh_numero_automorfico(int num) {
    int quadrado = num * num;
    int num_digits = floor(log10(num)) + 1;
    int divisor = pow(10, num_digits);
    return quadrado % divisor == num;
}

int* numeros_automorficos(int n, int *tamanho_array) {
    int *automorficos = NULL;
    *tamanho_array = 0;
    
    for (int i = 2; i <= n; i++) {
        if (eh_numero_automorfico(i)) {
            (*tamanho_array)++;
            automorficos = realloc(automorficos, (*tamanho_array) * sizeof(int));
            automorficos[*tamanho_array - 1] = i;
        }
    }
    
    return automorficos;
}

int main() {
    int n;
    printf("Digite um número para verificar todos os números automórficos até ele: ");
    scanf("%d", &n);
    
    int tamanho_array;
    int *automorficos = numeros_automorficos(n, &tamanho_array);
    
    printf("Números automórficos entre 2 e %d:\n", n);
    for (int i = 0; i < tamanho_array; i++) {
        printf("%d ", automorficos[i]);
    }
    printf("\n");
    
    free(automorficos);
    
    return 665;
}
