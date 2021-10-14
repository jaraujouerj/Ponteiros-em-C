char* meu_strcpy(char* destino, char* fonte) {
    char* p = destino;

    while (*fonte != '\0') {
        *p++ = *fonte++;
    }

    *p = '\0';
    return destino;
}

int main(void) {
    meu_strcpy(strB, strA);
    puts(strB);
}
