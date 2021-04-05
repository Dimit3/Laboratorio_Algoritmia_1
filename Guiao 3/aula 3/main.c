#include <stdio.h>
#include <string.h>

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



void maximomin (int array[], int n)
{
    int i;
    int max = array[0];
    int min = array[0];
    for (i=1; i<n ;i++)
    {
        if (array[i] > max) max = array[i];
        if (array[i] < min) min = array[i];
    }
    printf("\n maximo: %d\n",max);
    printf("minimo: %d\n",min);
}

void media (int array[],int n)
{
    double soma=0;
    for (int i = 0 ; i < n ;i++)
    {
        soma = soma+ array [i];
    }
    printf("media: %.2f",(soma/n));
}


void repetidos(int array[],int n)

{
    int i;
    int repetidos[n];
    int p = repetidos[0];
    for (i = 0; i < n ; i++ )
    {

    }




}




int main()
{
    int array[257];
    int i,size,j;
    printf("Insira o tamanho do array (<256):\n");
    scanf("%d",&size);
    for (i=0;i<size;i++)
    {
        printf("Insira o elemento de ordem %d:  ",i);
        scanf("%d",&array[i]);
    }
    printf("Array inverso e: ");
    for (j=size-1;j>=0;j--) // começa em 0 ultimo elemento = size -1
    {
        printf("%d",array[j]);
    }
    maximomin(array,size);
    media(array,size);
    repetidos(array,size);
    return 0;
}

