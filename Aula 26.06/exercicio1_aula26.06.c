#include <stdio.h>

int main () {

    FILE *arquivo;
    char string[100];

    arquivo = fopen("teste1.txt", "r");

    if (arquivo == NULL) {
        printf("Nao consegui abrir o arquivo.\n");
        return 1;
    }

    while (fgets(string, 100, arquivo)) {
        printf("Linha lida do arquivo: %s", string);
    }

    fclose(arquivo);
    return 0;
}

