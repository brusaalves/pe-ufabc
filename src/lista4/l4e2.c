// exercicio 2

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Informe o tamanho de vec: ");
    scanf("%d", &n);

    int* vec = malloc(n * sizeof(int));
    for(int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        vec[i] = val;
    }

    for(int i = 0; i < n; i++) {
        printf("entrada: %d, conteudo: %d, endereco: %p\n", i, vec[i], &vec[i]);
    }
}