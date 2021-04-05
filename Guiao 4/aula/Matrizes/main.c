#include <stdio.h>

int main()

{
    int i, j;
    int m1 [2][2], m2 [2][2];
    printf("Matriz1 \n");
   for (  i = 0; i < 2; i++){
       for (  j = 0; j < 2; j++){
           printf("linha %d, coluna %d : ",i+1,j+1);
           scanf ("%d",&m1[i][j]);
           printf("\n");
       }
   }
    printf("Matriz2 \n");
    for (  i = 0; i < 2; i++){
        for (  j = 0; j < 2; j++){
            printf("linha %d, coluna %d :",i+1,j+1);
            scanf ("%d",&m2[i][j]);
            printf("\n");
        }
    }

    printf("Matriz Soma \n");
    printf("%d   %d\n",m1 [0][0]+m2 [0][0],m1 [0][1]+m2 [0][1]);
    printf("%d   %d\n",m1 [1][0]+m2 [1][0],m1 [1][1]+m2 [1][1]);

    return 0;
}