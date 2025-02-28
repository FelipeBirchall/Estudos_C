#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    double valor;
    long posicao;

    scanf("%d" , &n);

    FILE *file = fopen("arquivo.txt" , "wb+");
    if(file == NULL)
    {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for(int i = 0; i < n; i++)
    {
        scanf("%lf" , &valor);

        fwrite(&valor , sizeof(double) , 1 , file);
    }

    fseek(file , 0 , SEEK_END);
    
    posicao = ftell(file);

    while(posicao > 0)
    {
        posicao -= sizeof(double);
        fseek(file, posicao, SEEK_SET);
        fread(&valor, sizeof(double) , 1 , file);
        // Verifica se o valor é um número inteiro
        if (valor == (int)valor) {
            printf("%d\n", (int)valor); // Imprime como inteiro
        } else {
            printf("%.3lf\n", valor); // Imprime como double
        }

    }

    fclose(file);

    return 0;
}