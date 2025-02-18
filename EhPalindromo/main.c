#include <stdio.h>
#include <stdbool.h>
#include <string.h>


bool EhPalindromo(char palavra[])
{
    int esq = 0;
    int dir = strlen(palavra) - 1;
    while(esq < dir)
    {
        if(palavra[esq] != palavra[dir])
        {
            return false;
        }
        esq++;
        dir--;
    }
    return true;
}

int main()
{
    char palavra[1000];
    
    scanf("%[^\n]" , palavra);

    while(strcmp(palavra , "FIM") != 0)
    {
        bool resp = EhPalindromo(palavra);

        if(resp){printf("SIM\n");}

        else{printf("NAO\n");}

        scanf(" %[^\n]" , palavra);
    }

    return 0;
}


