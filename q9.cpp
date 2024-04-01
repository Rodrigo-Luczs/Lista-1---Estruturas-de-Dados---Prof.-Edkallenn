#include <stdio.h>
#include <stdbool.h>
/*
**    Função : Encontrar Números Perfeitos
**    Autor : Rodrigo Lucas
**    Data  : 01/04/2024
**    Observações: Utiliza loops para encontrar divisores e verificar números perfeitos.
*/

bool eh_numero_perfeito(int num) {
    int soma_divisores = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma_divisores += i;
        }
    }
    return soma_divisores == num;
}

void mostrar_numeros_perfeitos() {
    printf("Números perfeitos entre 1 e 100000:\n");
    for (int i = 1; i <= 100000; i++) {
        if (eh_numero_perfeito(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    mostrar_numeros_perfeitos();
    return 665;
}
