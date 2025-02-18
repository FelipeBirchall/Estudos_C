#include <stdio.h>
#include <stdbool.h>
#include <string.h>


bool ehPalindromo(char palavra[] ,int i)
{
    int n = strlen(palavra);
    if(i < n)
    {
        if(palavra[i] != palavra[n-1-i])
        {
            return false;
        }
        ehPalindromo(palavra ,i+1);
    }
    return true;
}

int main()
{
    char palavra[1000];
    scanf("%[^\n]" , palavra);
    while(strcmp(palavra , "FIM") != 0)
    {
        if(ehPalindromo(palavra, 0)){
            printf("SIM\n");
        }
        else{
            printf("NAO\n");
        }
        scanf(" %[^\n]" , palavra);
    }
    return 0;
}