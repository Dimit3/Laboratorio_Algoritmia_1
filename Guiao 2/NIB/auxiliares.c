//
// Created by Dimitri on 21/02/2019.
//
#include <stdio.h>
#include <stdlib.h>
#include <mem.h>





/*
BBBB  AAAA  CCCC  CCCC  CCC  KK
0010 0000 0320 5820 001 87
Onde:

B = 1-4 código do banco;
A = 5-8 código do balcão ou agência (zeros se o banco não utilizar esta referência);
C = número da conta (9-19);
K = 2 algarismos de controlo (20-21).

 */


void lernib (char NIB[21]){
    printf ("Insira o NIB\n");
    scanf ("%s",NIB);
    printf ("\n");
}


void banco (int n)
{
    switch  (n)
    {
        case    7: printf("Novo banco"); break;
        case   10: printf("BPI"); break;
        case   18: printf("Santander Totta"); break;
        case   19: printf("BBVA"); break;
        case   23: printf("Activo Bank"); break;
        case   25: printf("Caixa BI"); break;
        case   32: printf("Barclays"); break;
        case   33: printf("Millennium BCP"); break;
        case   34: printf("BNP Paribas"); break;
        case   35: printf("CGD"); break;
        case   235: printf("Banco Carregosa"); break;
        case   36: printf("Montepio Geral"); break;
        case   38: printf("Banif"); break;
        case   43: printf("Deutsche Bank"); break;
        case   45: printf("Credito Agricola"); break;
        case   46: printf("Popular"); break;
        case   59: printf("Caixa Económica da Misericordia de Angra do Heroismo"); break;
        case   61: printf("Big"); break;
        case   65: printf("Best"); break;
        case   79: printf("BIC"); break;
        case  193: printf("Banco CTT"); break;
        case  269: printf("Bankinter"); break;
        case  781: printf("Direcao Geral do Tesouro"); break;
        case 5180: printf("Caixa Central de Credito Agrícola Mutuo"); break;
        default: printf("opcao invalida"); break;

    }
}

void nconta (char NIB[21])
{
    int i=8;
    while (NIB[i] == '0'){ i++;};
    for (i ; i <19; i++)
    printf("%c",NIB[i]);

}

void ncontrolo (char NIB[21])
{
    printf("%c%c", NIB[19],NIB[20]);
}

void nibespaco (char NIB[21])
{
    printf("%c%c%c%c %c%c%c%c %c%c%c%c %c%c%c%c %c%c%c %c%c",NIB[0],NIB[1],NIB[2],NIB[3],NIB[4],NIB[5],NIB[6], NIB[8], NIB[8],NIB[9],NIB[10],NIB[11],
           NIB[12],NIB[13],NIB[14], NIB[15],NIB[16],NIB[17],NIB[18],NIB[19], NIB[20])  ;
}

