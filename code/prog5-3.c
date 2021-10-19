#include <stdio.h>
void minha_funcao_A(char* ptr) {
    char a[] = "ABCDE";
    /* ... */
}

void minha_funcao_B(char* ptr) {
    char* cp = "FGHIJ";
    /* ... */
}

int main(void) {
    char* p;
    minha_funcao_A(p);
    minha_funcao_B(p);
}
