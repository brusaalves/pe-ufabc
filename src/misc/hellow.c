// name hellow.c
 
#include <stdio.h>
 
#define MAX_NAME_SIZE 1000
 
void read_string(char msg[], char val[MAX_NAME_SIZE]) {
    printf("%s", msg);
    scanf("%s", val);
}
 
int main() {
    char name[MAX_NAME_SIZE];
 
    // TODO: change next line by read_string fn
    // printf("What's your name? ~$ ");
    // scanf("%s", name);
 
    read_string("What's your name? ~$ ", name);
 
    printf("Hello world, %s!\n", name);
    return 0;
}