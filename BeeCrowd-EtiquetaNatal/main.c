#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 100

bool Ehigual(char linguas[], char traducoesRequeridas[]) {
    if (strlen(linguas) != strlen(traducoesRequeridas)) {
        return false;
    }
    for (int i = 0; linguas[i] != '\0'; i++) {
        if (linguas[i] != traducoesRequeridas[i]) {
            return false;
        }
    }
    return true;
}

void etiquetas(int M, char linguas[][MAX], char traducoes[][MAX]) {
    char criancas[M][MAX];
    char traducoesRequeridas[M][MAX];

    for (int i = 0; i < M; i++) {

        fgets(criancas[i], MAX, stdin);
    
        fgets(traducoesRequeridas[i], MAX, stdin);
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; linguas[j][0] != '\0'; j++) {
            if (Ehigual(linguas[j], traducoesRequeridas[i])) {
                printf("%s", criancas[i]);
                printf("%s\n", traducoes[j]);
                
            }
        }
    }
}

int main() {
    int N, M;
    scanf("%d", &N);
    getchar();

    char linguas[N][MAX];
    char traducoes[N][MAX];

    for (int i = 0; i < N; i++) {
        fgets(linguas[i], MAX, stdin);
       
        fgets(traducoes[i], MAX, stdin);
    }

    scanf("%d", &M);
    getchar();

    etiquetas(M, linguas, traducoes);

    return 0;
}