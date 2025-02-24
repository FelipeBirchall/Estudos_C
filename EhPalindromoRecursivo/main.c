#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Função recursiva que verifica se uma palavra é um palíndromo
bool ehPalindromo(char palavra[], int i, bool palindromo) {
    int n = strlen(palavra); 

    // Verifica se o índice atual (i) é menor que o comprimento da palavra
    if (i < n) {
        // Compara o caractere na posição i com o caractere na posição simétrica
        if (palavra[i] != palavra[n - 1 - i]) {
            palindromo = false; // Se os caracteres forem diferentes, não é palíndromo
            i = n; // Força a saída do loop na próxima iteração
        }
        // Chama recursivamente a função para o próximo índice (i + 1)
        return ehPalindromo(palavra, i + 1, palindromo);
    }
    
    return palindromo;
}


int main() {
    char palavra[1000]; // Array para armazenar a palavra inserida pelo usuário

    scanf("%[^\n]", palavra);

    // Loop que continua até o usuário digitar "FIM"
    while (strcmp(palavra, "FIM") != 0) {
        // Verifica se a palavra é um palíndromo e exibe o resultado
        if (ehPalindromo(palavra, 0, true)) {
            printf("SIM\n"); 
        } else {
            printf("NAO\n"); 
        }
        scanf(" %[^\n]", palavra);
    }

    return 0;
}