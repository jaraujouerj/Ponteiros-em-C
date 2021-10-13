#include <stdio.h>

char strA[80] = "Uma string usada para demonstração";
char strB[80];

int main(void) {
    char* pA;    // um ponteiro do tipo caractere
    char* pB;    // outro ponteiro do tipo caractere
    puts(strA);  // mostra a string A
    pA = strA;   // aponta pA para a string A
    puts(pA);    // mostra o que pA está apontando
    pB = strB;   // aponta pB para a string B
    putchar('\n');  // pula uma linha na tela

    while(*pA != '\0') { // linha A (veja texto)
        *pB++ = *pA++;   // linha B (veja texto)
    }

    *pB = '\0';  // linha C (veja texto)
    puts(strB);  // mostra strB na tela
    return 0;
}
