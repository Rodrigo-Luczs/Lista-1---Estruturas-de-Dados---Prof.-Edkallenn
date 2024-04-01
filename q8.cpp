#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/*
**    Função : Encontrar Números de Armstrong:
**    Autor : Rodrigo Lucas
**    Data  : 01/04/2024
**    Observações: Contagem de dígitos e potência para verificar números de Armstrong.
*/


int contar_digitos(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

bool eh_numero_armstrong(int num) {
    int original = num;
    int num_digitos = contar_digitos(num);
    int soma_cubos = 0;
    
    while (num != 0) {
        int digito = num % 10;
        soma_cubos += pow(digito, num_digitos);
        num /= 10;
    }
    
    return soma_cubos == original;
}

void mostrar_numeros_armstrong(int limite_inferior, int limite_superior) {
    printf("Números de Armstrong entre %d e %d:\n", limite_inferior, limite_superior);
    for (int i = limite_inferior; i <= limite_superior; i++) {
        if (eh_numero_armstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int limite_inferior, limite_superior;
    printf("Digite os limites inferior e superior separados por um espaço: ");
    scanf("%d %d", &limite_inferior, &limite_superior);
    
    mostrar_numeros_armstrong(limite_inferior, limite_superior);
    
    return 665;
}
