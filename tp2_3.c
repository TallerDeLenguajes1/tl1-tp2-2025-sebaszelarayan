#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 7

int main()
{   
    int i,j;
    int matriz[N][M];
    //creo puntero de matriz
    int *pmatriz=matriz;
    //cambio en la semilla para numeros randoms
    srand(time(NULL));
    //recorro las filas de la matriz
    for(i = 0;i<N; i++)
    {
        //rrecorro las colunas de la matriz
        for(j = 0;j<M; j++)
        {   
            *(pmatriz + i* M + j)=1+rand()%100;        
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    } 
    pmatriz-=(i*N+j+M);
    return 0;
}
