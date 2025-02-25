#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Função que verifica se a palavra é "FIM"
bool finalizar(char num[]) {
    bool FIM = false;
    int n = strlen(num);
    // Verifica se a string tem 3 caracteres e se são 'F', 'I' e 'M'
    if(num[0] == 'F' && num[1] == 'I' && num[2] == 'M' && n == 3) {
        FIM = true;
    }
    return FIM;
}

// Função recursiva que soma os dígitos de uma string numérica
int Soma(char num[], int i, int n, int soma) {
    if(i < n) {
        // Converte o caractere para inteiro e adiciona à soma
        soma += (num[i] - '0');
        // Chama a função recursivamente
        return Soma(num, i + 1, n, soma);
    }
    return soma; // Retorna a soma total
}

int main() {
    char num[100];

    
    scanf("%[^\n]", num);

    // Loop até que o usuário digite "FIM"
    while(finalizar(num) == false) {

        int n = strlen(num); // Calcula o comprimento da string

        // Exibe a soma dos dígitos da string
        printf("%i\n", Soma(num, 0, n, 0));

        scanf(" %[^\n]", num);
    }

    return 0;
}
