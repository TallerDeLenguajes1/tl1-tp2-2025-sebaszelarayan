#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMA 10

struct {
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int year; // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
}typedef Tcompu;

//Definicion funciones 
void listarPCs(Tcompu pc[], int cantidad);
void mostrarMasVieja(Tcompu pc[], int cantidad);
void mostrarMasVeloz(Tcompu pc[], int cantidad);

int main()
{
    //carga de datos
    Tcompu pc[5];
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        pc[i].velocidad=1+rand()%(3-1+1);
        pc[i].year=2015+rand()%(2024-2015+1);
        pc[i].cantidad_nucleos=1+rand()%(8-1+1);
        pc[i].tipo_cpu=tipos+(rand()%6);
    }



    
    return 0;
}
//desarrollo de funciones
