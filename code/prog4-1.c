char* meu_strcpy(char dest[], char fonte[]) {
    int i = 0;

    while (fonte[i] != '\0') {
        dest[i] = fonte[i];
        i++;
    }

    dest[i] = '\0';
    return dest;
}

int main(void) {
    meu_strcpy(strB, strA);
    puts(strB);
}
