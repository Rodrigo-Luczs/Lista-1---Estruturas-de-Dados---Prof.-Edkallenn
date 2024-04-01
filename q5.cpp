#include <stdio.h>
/*
**    Função : Encontrar a Soma de Fatoriais Inversos:
**    Autor : Rodrigo Lucas
**    Data  : 01/04/2024
**    Observações: Calcula a soma de fatoriais inversos por meio de if e else
*/

unsigned long long int fatorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * fatorial(num - 1);
}

double soma_fatoriais_inversos(int n) {
    double soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += 1.0 / fatorial(i);
    }
    return soma;
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    double resultado = soma_fatoriais_inversos(n);
    
    printf("A soma dos fatoriais inversos até o termo %d é: %.10lf\n", n, resultado);
    
    return 665;
}
