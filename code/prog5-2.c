#include <stdio.h>
#include <string.h>

struct tag {
    char sobrenome[20];
    char nome[20];
    int idade;
    float salario; 
};

struct tag minha_struct;
void mostra_nome(struct tag* p); 

int main(void) {
    struct tag* st_ptr; /* um ponteiro para uma estrutura */
    st_ptr = &minha_struct; /* aponta para minha_struct */
    strcpy(minha_struct.sobrenome, "Jensen");
    strcpy(minha_struct.nome, "Ted");
    printf("\n%s ", minha_struct.nome);
    printf("%s\n", minha_struct.sobrenome);
    minha_struct.idade = 63;
    mostra_nome(st_ptr); // passa o ponteiro
    return 0;
}

void mostra_nome(struct tag* p) {
    printf("\n%s ", p->nome);
    printf("%s ", p->sobrenome);
    printf("%d\n", p->idade);
}
