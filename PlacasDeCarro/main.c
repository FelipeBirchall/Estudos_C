#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validarPlaca(char placa[])
{
    int validacao = 0;
    placa[strcspn(placa, "\n")] = '\0';
    int n = strlen(placa);
    if(n == 8)
    {
        for(int i = 0; i < 3; i++)
        {
            if(placa[i] < 'A' || placa[i] > 'Z')
            {
                i = 3;
                validacao = 0;
            }
            else{
                validacao = 1;
            }
        }
        if(validacao == 1)
        {
            if(placa[3] != '-')
            {
                validacao = 0;
            }
        }
        if(validacao == 1)
        {
           for(int i = 4; i < n; i++)
           {
             if(placa[i] < '0' || placa[i] > '9')
             {
                validacao = 0;
                i = n;
             }
           }
        }
    }
    else if(n == 7)
    {
        for(int i = 0; i < 3; i++)
        {
            if(placa[i] < 'A' || placa[i] > 'Z')
            {
                i = 3;
                validacao = 0;
            }
            else{
                validacao = 2;
            }
        }
        if(validacao == 2)
        {
            if(placa[3] < '0' || placa[3] > '9')
            {
                validacao = 0;
            }
        }
        if(validacao == 2)
        {
            if(placa[4] < 'A' || placa[4] > 'Z')
            {
                validacao = 0;
            }
        }
        if(validacao == 2)
        {
            for(int i = 5; i < n; i++)
            {
                if(placa[i] < '0' || placa[i] > '9')
                {
                    validacao = 0;
                    i = n;
                }
            }
        }
    }
    return validacao;
}




int main()
{

    char placa[50];

    fgets(placa, sizeof(placa) , stdin);

    printf("%d" , validarPlaca(placa));

    



    return 0;
}


