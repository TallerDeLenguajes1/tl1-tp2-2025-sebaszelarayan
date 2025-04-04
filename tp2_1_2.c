#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main()
{
    // codigo a completar
    int i;
    int vt[N];  
    //decalaro el puntero y asigno a el vector
    int *pvt=vt; 
    //recarago la semilla
    srand(time(NULL));
    //recorro el vector
    for(i=0; i < N ; i++){
        //mediante el puntero pvt y notacion indexada lleno los valores del vector vt 
        *(pvt + i)=1+rand()%100;
        //muestro los datos cargados por el puntero pvt
        printf("%d ",*(pvt + i));
    }  
    pvt -= i;
    return 0;
}
