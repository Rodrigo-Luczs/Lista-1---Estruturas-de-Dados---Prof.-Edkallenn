#include <stdio.h>
/*
**    Função : Encontrar a Soma de Divisores Amigáveis:
**    Autor : Rodrigo Lucas
**    Data  : 01/04/2024
**    Observações: Verifica se dois numeros sao amigaveis e busca pares amigaveis de ate o limite de numero solicitado pelo usuario.
*/


int divisores(int num) {
    int sum = 1;
    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}

void verificar_amigaveis(int a, int b) {
    int sumA = divisores(a);
    int sumB = divisores(b);


    printf("\nOs divisores de  %d são: ", a);
    for (int i = 1; i <= a/2; i++) {
        if (a % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\nSoma dos divisores de %d : %d\n", a, sumA);

    printf("\nOs divisores de %d são: ", b);
    for (int i = 1; i <= b/2; i++) {
        if (b % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\nSoma dos divisores %d : %d\n", b, sumB);


    if (sumA == b && sumB == a) {
        printf("\n%d e %d são numeros amigaveis.\n", a, b);
    } else {
        printf("\n%d e %d não são amigaveis.\n", a, b);
    }
}


void verificar_pares_amigaveis(int limit) {
    for (int i = 1; i < limit; i++) {
        for (int j = i+1; j < limit; j++) {
            if (i == divisores(j) && j == divisores(i)) {
                printf("\n%d e %d são um par de numeros amigaveis\n", i, j);
            }
        }
    }
}

int main() {
    int num1, num2, n;

    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);
    verificar_amigaveis(num1, num2);

    printf("Digite o valor de n(limite): ");
    scanf("%d", &n);
    verificar_pares_amigaveis(n);

    return 665;
}
