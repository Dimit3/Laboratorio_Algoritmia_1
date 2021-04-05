#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/*

char frase[300]
int freq [26]
fgets (char*,comprimento,stdin) // gets (frase)

isalpha ()
toupper (c)
char frase [300]
int freq[26]

freq['c' - 'A']
freq [(int) (c-'A')]

*/




char* lower (char frase[]){
    int i = 0;
    for (i = 0; frase[i] != '\0'; i++) {
        frase[i] = tolower(frase[i]);
    }
    return frase;
}






void repeated (char frase[],int freq[], int nfrase,int nfreq)
{
    int i = 0;
    for ( int z = 0 ; z < nfreq ; z++)       // meter array das freq tudo a 0
    {
        freq[z] = 0;
    }
    while (frase[i] != '\0')                // contar as freq
    {
        freq[frase[i] - 'a']++;
        i++;
    };

}





int maximum (int freq[],int n , int *max)
{
    int i;
    *max = freq[0];
    for (i = 1; i < n ;i++)
    {
       if (freq[i] > *max) *max = freq[i] ;
    }
    return *max;
}




void printar (int freq[], int n, int max) {
    printf("\n\n");
    for (; max > 0; max--)                  // pegar no maximo e ir diminuindo
    {
        for (int i = 0; i < 26; i++)               // percorrer as frequencia e ver se sao igual ou maior ao max se sim meter * se nao proximo
        {
          if (freq[i] >= max)
          {putchar(' ');putchar(' '); putchar('*');}
          else {putchar(' '); putchar(' '); putchar(' ');};
        }
    printf("\n");
    }

}







int main ()
{
    int max = 0;
    char frase[300];
    int freq[26];
    printf("sentence:  ");
    fgets(frase,300,stdin);                 // pegar na frase
    lower(frase);                           // meter em pequeno
    repeated (frase, freq, 300,26);         // ver os repetidos
    maximum (freq,26,&max);                 // dizer maximo da freq
    printar (freq,26,max);                      // imprimir freq
    printf("  A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z\n");      // ultima linha
    system("pause");
    return 0;
}