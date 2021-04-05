#include <stdio.h>
#include <mem.h>



char *signo (int dia , int mes) {
    static char buffer[25];
    switch (mes) {
        case 1:
            strcpy(buffer , dia < 20 ? "Capricórnio" : "Aquário");
            break;
        case 7:
            strcpy(buffer , dia < 23 ? "Cancer" : "Leao");
            break;
        case 8:
            strcpy(buffer , dia < 23 ? "Leao" : "Virgem");
            break;
        case 9:
            strcpy(buffer , dia < 23 ? "Virgem" : "Libra");
            break;
        case 12:
            strcpy(buffer , dia < 22 ? "Sagitário" : "Capricórnio");
            break;
        default:
            strcpy(buffer , "desconhecido");
            break;
    }
    return buffer;
}

int main ()
{
    int d,m;
    printf("dia e mes:");
    scanf ("%d %d", &d,&m);
    printf("%s", signo(d,m));
    return 0;
}

