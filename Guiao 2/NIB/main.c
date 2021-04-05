#include "auxiliares.h"
#include <stdio.h>
#include <stdlib.h>



char NIB[21];
int main ()
{
    int temnib=0;
    int menu;
    int  exit =0;
    while(exit != 7) {
        int numb = (NIB[0]-48) *1000 + (NIB[1]-48) *100 + (NIB[2]-48) *10 + (NIB[3]-48);
        system("color 0A");
        printf("\n\n----------------------------------------------Escolha uma opcao--------------------------------------------------------\n\n");
        printf("Opcao 1 -> Ler NIB\n");
        printf("Opcao 2 -> Indicar o banco do NIB\n");
        printf("Opcao 3 -> Indicar o numero da conta (sem zeros a esquerda)\n");
        printf("Opcao 4 -> Indicar os numeros de controlo (os dois ultimos digitos)\n");
        printf("Opcao 5 -> Escrever o NIB com um espaco entre cada bloco (banco, agencia, conta, controlo)\n");
        printf("Opcao 6 -> Verificar o NIB (opcional)\n");
        printf("Opcao 7 -> Sair do programa\n\n\n");
        scanf("%d" , &menu);  // NOLINT(cert-err34-c)
        switch (menu) {
            case 1:
                lernib(NIB);
                temnib=1;
                break;
            case 2:
                if (temnib == 1) {
                    banco(numb);}
                else printf("Nao tem nib guardado");
                break;

            case 3:
                if (temnib == 1) {
                    nconta (NIB);}
                else printf("Nao tem nib guardado");
                break;

            case 4:
                if (temnib == 1) {
                    ncontrolo (NIB);}
                else printf("Nao tem nib guardado");
                break;

            case 5:
                if (temnib == 1) {
                    nibespaco (NIB);}
                else printf("Nao tem nib guardado");
                break;

            case 6:
                // verificarnib ();
                break;
            case 7:
                exit = 7;
                break;
            default:

                printf("opcao invalida\n");
                break;
        }

    }
    system("pause");
    return 0;
}


