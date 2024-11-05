// name lib.c (custom libraries)

#include <stdio.h>

// TODO: check how to use this constant
#define MIN_STDIN_LEN 1
#define MAX_STDIN_LEN 10000000

// TODO: rewrite this function using fgets
void read_char(char msg[], char val[MAX_STDIN_LEN]) {
    printf("%s", msg);
    scanf("%s ", val);
}

void read_word(char msg[], char val[MAX_STDIN_LEN]) {
    printf("%s", msg);
    scanf("%s", val);
}

char * read_line(char msg[], char val[MAX_STDIN_LEN]) {
    printf("%s", msg);
    return fgets(val, MAX_STDIN_LEN, stdin);
}

// TODO: fix-me!
void read_text(char msg[], char val[MAX_STDIN_LEN]) {
    printf("%s", msg); // stop with Ctrl + D
    while (read_line("\0", val)); // "\0" -> empty string notation
}