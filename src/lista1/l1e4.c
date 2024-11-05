// name e4.c
 
#include <stdio.h>
#include <stdbool.h>

int calcula_fatorial(int x) {
    int fat = 1;
    for(int i = 1; i <= x; i++) fat = fat * i;
    return fat;
}

int calcula_combinacao(int n, int k) {
    int comb = calcula_fatorial(n) / (calcula_fatorial(k) * calcula_fatorial(n - k));
    return comb;
}

bool eh_natural(double x) {
    int x1 = (int) x;
    return (x > -1 && (x - x1) == 0) ? true : false;
}

int main() {
    printf("Lista 1 - Exercicio 4\n");
    
    double n, k;
    
    printf("Informe um número (n): ");
    scanf("%lf", &n);
    printf("Informe um número (k): ");
    scanf("%lf", &k);

    if((0 <= k && k <= n) && (eh_natural(n) && eh_natural(k))) {
        int n1 = (int) n, k1 = (int) k;
        printf("C%d,%d é: %d\n", n1, k1, calcula_combinacao(n1, k1));
    } else {
        printf("Os valores informados (n: %lf, k: %lf) não satisfazem a condição de existência:\n0 <= k <= n | n,k E N\n", n, k);
    }
    
    return 0;
}