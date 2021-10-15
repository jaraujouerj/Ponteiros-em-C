#include <stdio.h>
#include <string.h>

struct tag {
    char sobrenome[20];
    char nome[20];
    int idade;
    float salario; // por ex. 12.5 por hora
};

struct tag minha_struct;

int main(void) {
    strcpy(minha_struct.sobrenome, "Jensen");
    strcpy(minha_struct.nome, "Ted");
    printf("\n%s ", minha_struct.nome);
    printf("%s\n", minha_struct.sobrenome);
    return 0;
}
