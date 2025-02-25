#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Função que verifica se a palavra é "FIM"
bool finalizar(char palavra[]) {
    bool FIM = false;
    int n = strlen(palavra);
    // Confere se a palavra tem 3 caracteres e se são 'F', 'I' e 'M'
    if(palavra[0] == 'F' && palavra[1] == 'I' && palavra[2] == 'M' && n == 3) {
        FIM = true;
    }
    return FIM;
}

// Função recursiva que inverte a palavra
void inverter(char palavra[], int i, int n) {
    if(i < n / 2) {
        // Troca os caracteres simétricos
        char AUX = palavra[i];
        palavra[i] = palavra[n - i - 1];
        palavra[n - i - 1] = AUX;
        // Chama a função recursivamente
        inverter(palavra, i + 1, n);
    }
}

int main() {
    char palavra[1000]; // Array para armazenar a palavra
    int n;

    // Lê uma linha de entrada
    scanf("%[^\n]", palavra);

    // Loop até a palavra ser "FIM"
    while(finalizar(palavra) == false) {
        n = strlen(palavra); // Calcula o tamanho da palavra

        inverter(palavra, 0, n); // Inverte a palavra

        // Exibe a palavra invertida
        printf("%s\n", palavra);

        // Lê a próxima palavra
        scanf(" %[^\n]", palavra);
    }

    return 0;
}
