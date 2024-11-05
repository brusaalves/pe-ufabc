// name e1.c
 
#include <stdio.h>

int main() {
    printf("Lista 1 - Exercicio 1\n");
    
    int n;
    
    printf("Informe um número (N): ");
    scanf("%d", &n);

    printf("Os números pares de 0 a N são: ");
    for(int i = 1; i <= n; i++) 
        if (i % 2 == 0) printf("%d ", i);

    printf("\n");
    return 0;
}