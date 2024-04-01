

#include <stdio.h>
/*
**    Função :  Encontrar Fatorial Duplo
**    Autor : Rodrigo Lucas
**    Data  : 01/04/2024
**    Observações:  Tabela demonstrativa de fatorial duplo, fatorial normal e a diferença dos dois
*/

int fatorial_duplo(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fatorial_duplo(n - 2);
}

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fatorial(n - 1);
}

int main() {
    printf(" n | Fatorial Duplo | Fatorial | Diferença\n");
    printf("-------------------------------------------------\n");
    for (int i = 2; i <= 20; i += 2) {
        int fd = fatorial_duplo(i);
        int f = fatorial(i);
        int dif = f - fd;
        printf(" %d | %10d | %10d | %10d\n", i, fd, f, dif);
    }
    return 665;
}
