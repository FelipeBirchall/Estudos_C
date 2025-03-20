#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool finalizar(char frase[])
{
    bool FIM = false;
    int n = strlen(frase);
    if (n > 0 && frase[n - 1] == '\n') {
        frase[n - 1] = '\0';
        n--;
    }
    if(frase[0] == 'F' && frase[1] == 'I' && frase[2] == 'M' && n == 3){
        FIM = true;
    }
    return FIM;
}

int numMaiusculas(char frase[])
{
    int maiusculas = 0;
    int n = strlen(frase);
    for(int i = 0; i < n; i++)
    {
        if(frase[i] >= 'A' && frase[i] < 'Z')
        {
            maiusculas++;
        }
    }
    return maiusculas;
}

int main()
{

    char frase[1000];
    fgets(frase , sizeof(frase) , stdin);
    while(!finalizar(frase))
    {
        printf("%d\n" , numMaiusculas(frase));

        fgets(frase , sizeof(frase) , stdin);
    }

    return 0;
}