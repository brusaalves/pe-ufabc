// ex2.c - Quadrado de Matriz Quadrada

#include <stdio.h>

#define MAX_MSIZE 200

int main() {
    int msize, m[MAX_MSIZE][MAX_MSIZE];
    
    // matrix size
    scanf("%d", &msize);
    
    // reading matrix elements
    for (int i = 0; i < msize; i++) {
        for (int j = 0; j < msize; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    // printing M²
    for (int i = 0; i < msize; i++) {
        for (int j = 0; j < msize; j++) {
            int resultado = 0;
            for (int k = 0; k < msize; k++) {
                resultado += m[i][k] * m[k][j];
            }
            printf("%d, ", resultado);
        }
    }

    return 0;
} 