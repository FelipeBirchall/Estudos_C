#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Função para verificar se uma palavra é um palíndromo
bool EhPalindromo(char palavra[])
{
    bool palindromo = true;
    int esq = 0;
    int dir = strlen(palavra) - 1;

    // Compara os caracteres da esquerda para a direita e da direita para a esquerda
    while (esq < dir)
    {
        // Se os caracteres nas posições atuais não forem iguais, a palavra não é um palíndromo
        if (palavra[esq] != palavra[dir])
        {
            palindromo = false;
            esq = strlen(palavra);
        }
        // Move os índices para o próximo par de caracteres enquanto não houver diferença
        esq++;
        dir--;
    }
    // Retorna true se for palíndromo, caso contrário, false
    return palindromo;
}

int main()
{
    char palavra[1000];

    scanf("%[^\n]", palavra);

    // Loop continua até que o usuário digite "FIM"
    while (strcmp(palavra, "FIM") != 0)
    {
        // Verifica se a palavra é um palíndromo usando a função EhPalindromo
        bool resp = EhPalindromo(palavra);

        // Imprime "SIM" se for palíndromo, caso contrário, imprime "NAO"
        if (resp)
        {
            printf("SIM\n");
        }
        else
        {
            printf("NAO\n");
        }

        
        scanf(" %[^\n]", palavra);
    }

    return 0;
}