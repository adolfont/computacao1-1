#include<stdio.h>

int main(){

    FILE*arquivo;
    float vetor[5];
    float soma;

    arquivo = fopen("teste2.txt", "r");

    if (arquivo == NULL) {
        printf("Nao consegui abrir o arquivo.\n");
        return 1;
    }

    // ISTO AQUI NAO VAI DAR CERTO SE O ARQUIVO NAO TIVER EXATAMENTE 5 LINHAS
    for(int i=0;i<5;i++) {

      fscanf(arquivo,"%f",&vetor[i]);
      soma += vetor[i];
    }
printf("A soma dos valores e:%f\n", soma);


fclose(arquivo);

return 0;
}
