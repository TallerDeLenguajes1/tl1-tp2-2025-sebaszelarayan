#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMA 10

struct {
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int year; // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
}typedef compu;

void CrearStock(int num_pc,compu *pc);
int main()
{
    int num_pc=5;
    compu *pc=(compu *)malloc(sizeof(compu)*num_pc);

    CrearStock(num_pc,pc);

    return 0;
}
void CrearStock(int num_pc,compu *pc){
    srand(time(NULL));
    for (int i = 0; i < num_pc; i++)
    {
        pc[i].velocidad=2015+rand()%(2024-2015+1);
    }
    
}
