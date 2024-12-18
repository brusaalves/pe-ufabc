// http://professor.ufabc.edu.br/~m.sambinelli/courses/2024Q3-PE/listas/modulo05-ponteiros.pdf
// exercicio 1 (buscador de texto)

#include "../lib.c"

int main() {
    char search[MAX_STDIN_LEN], input[MAX_STDIN_LEN];
    read_char("Digite um caracter (para ser encontrado) e uma mensagem:\n", search);
    read_line("\0", input);

    printf("\nSearching: '%s' into: %s\n", search, input);

    for (int i = 0; i < sizeof(input) - 1; i++) {
        printf("%c", input[i]);
        if (input[i] == search[0]) break;
    }
}