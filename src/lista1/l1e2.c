// name e2.c
 
#include <stdio.h>

int eh_primo(int x) {
    for(int i = 2; i < x; i++)
        if(x % i == 0)
            return 0;
    return 1;
}

int main() {
    printf("Lista 1 - Exercicio 2\n");
    
    int n;
    
    printf("Informe um número (N): ");
    scanf("%d", &n);

    printf("Os números primos de 1 a N são: ");
    for(int i = 2; i <= n; i++)
        if(eh_primo(i) == 1) printf("%d ", i);

    printf("\n");
    return 0;
}