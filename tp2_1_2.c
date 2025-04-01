#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main()
{
    // codigo a completar
    double vt[N]; 
    int i;
    double *pvt=vt;  
    srand(time(NULL));
    for(i=0; i < N ; i++){
        *(pvt + i)=1+rand()%100;
        printf("%.0f,", *(pvt + i));
    }   
    pvt -= i;
    return 0;
}
