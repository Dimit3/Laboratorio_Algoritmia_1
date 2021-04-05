#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()

{
    int a,b,c;
    system("color 0A");
    printf("\n Insira as medidas dos lados do triangulo: \n\n ");
    printf("Medida 1 = ");
    scanf ("%d", &a);
    printf("\n Medida 2 = ");
    scanf ("%d", &b);
    printf("\n Medida 3 = ");
    scanf ("%d", &c);
    printf ("\n \n -------------------------------------------E triangulo valido ou nao?-------------------------------------------------\n\n");
    if ((abs (b - c) < a < (b + c)) && (abs (a - c) < b < a + c) && (abs (a - b) < c < a + b)) { printf ("O triangulo com as medidas  | a = %d b = %d c = %d |  e valido \n \n", a,b,c);}
    else printf ("O triangulo com as medidas  | a = %d b = %d c = %d |  nao e valido \n \n", a,b,c);
    printf ("\n \n --------------------------------------------------Classificacao------------------------------------------------------\n\n");
    if ((a==b) && (b==c)) (printf (" O triangulo e equilatero \n"));
    else  if ((a==b) || (b==c) || (a==c)) printf(" O triangulo é isosceles");
    else printf (" O triangulo e escaleno \n");
    printf ("\n \n ------------------------------------------------------Area-----------------------------------------------------------\n\n");
    float s, area;
    s =(a+b+c)/2;
    area = sqrt(s * (s-a) * (s-b) * (s-c));
    printf ("A area do triangulo abc e:   %.3f  unidades de area \n\n ",area);
    system("pause");
    return 0;
}