#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void uniaoFrases(char frase[])
{
    int n = strlen(frase);
    int posicao = 0;
    char frase1[100] = "";
    char frase2[100] = "";

    if (n > 0 && frase[n - 1] == '\n') {
        frase[n - 1] = '\0';
        n--;
    }

    for(int i = 0 ; i < n; i++)
    {
        if(frase[i] == ' '){
            posicao = i;
            i = n;
        }
        else{
            frase1[i] = frase[i];
        }
    }
    frase1[posicao] = '\0';
    for(int i = posicao + 1; i < n; i++)
    {
        frase2[posicao - i - 1] = frase[i];
    }
    frase2[n - posicao - 1] = '\0';

   char uniao[200] = "";
   int len1 = strlen(frase1);
   int len2 = strlen(frase2);
   int index = 0, i = 0, j = 0;

   // Alternar letras entre frase1 e frase2
   while (i < len1 && j < len2) {
       uniao[index++] = frase1[i++];
       uniao[index++] = frase2[j++];
   }

    // Adicionar o restante da string maior
    while (i < len1) {
        uniao[index++] = frase1[i++];
    }
    while (j < len2) {
        uniao[index++] = frase2[j++];
    }
    
   uniao[index] = '\0';
   printf("%s" , uniao);

}


int main(){


    char frase[1000];
    fgets(frase , sizeof(frase) , stdin);

    uniaoFrases(frase);


    return 0;
}