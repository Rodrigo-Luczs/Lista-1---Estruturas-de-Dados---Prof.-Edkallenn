#include <stdio.h>
/*
**    Função : Potências Fatoriais
**    Autor : Rodrigo Lucas
**    Data  : 01/04/2024
**    Observações:  Potencia fatorial crescente e decrescente
*/

int potencia_fatorial_crescente(int x, int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= (x + i - 1);
    }
    return resultado;
}

int potencia_fatorial_decrescente(int x, int n) {
    int resultado = 1;
    for (int i = 0; i < n; i++) {
        resultado *= (x - i);
    }
    return resultado;
}

 int main() {
    int x, n;

   
    printf("Exemplos de potência fatorial crescente:\n");
    for (x = 2; x <= 4; x++) {
        for (n = 2; n <=4; n++) {
            printf("Potência de %d elevado a %d: %d\n", x, n, potencia_fatorial_crescente(x, n));
        }
    }

    printf("\nExemplos de potência fatorial decrescente:\n");
    for (x = 2; x <= 4; x++) {
        for (n = 2; n <= 4; n++) {
            printf("Potência de %d elevado a %d: %d\n", x, n, potencia_fatorial_decrescente(x, n));
        }
    }

    return 665;
}
