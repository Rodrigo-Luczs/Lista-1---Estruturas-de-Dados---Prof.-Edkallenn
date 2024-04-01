#include <stdio.h>
#include <stdlib.h>
/*
**    Função : Série de Fibonacci com Restrição Máxima
**    Autor : Rodrigo Lucas
**    Data  : 01/04/2024
**    Observações: alocação dinâmica de memória para armazenar a série de Fibonacci.
*/


int* fibonacci_max(int max) {
    int *fibonacci = (int*)malloc(10 * sizeof(int)); 
    int a = 0, b = 1, c = a + b;
    int count = 0; 
    while (c <= max) {
        fibonacci[count++] = a;
        a = b;
        b = c;
        c = a + b;
        if (count % 10 == 0) {
            fibonacci = (int*)realloc(fibonacci, (count + 10) * sizeof(int));
        }
    }
    fibonacci[count] = -1;
    return fibonacci;
}

int main() {
    int max;
    printf("Digite o número máximo para a série de Fibonacci: ");
    scanf("%d", &max);
    
    int *fibonacci = fibonacci_max(max);
    
    printf("Série de Fibonacci até %d:\n", max);
    for (int i = 0; fibonacci[i] != -1; i++) {
        printf("%d ", fibonacci[i]);
    }
    printf("\n");
    
    free(fibonacci);
    
    return 665;
}

