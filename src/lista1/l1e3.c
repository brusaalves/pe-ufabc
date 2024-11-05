// name e3.c
 
#include <stdio.h>

int calcula_fatorial(int x) {
    int fat = 1;
    for(int i = 1; i <= x; i++) fat = fat * i;
    return fat;
}

int main() {
    printf("Lista 1 - Exercicio 3\n");
    
    int n;
    
    printf("Informe um número (N): ");
    scanf("%d", &n);
    
    printf("N! é: %d\n", calcula_fatorial(n));
    return 0;
}