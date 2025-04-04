#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//defino estructura
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
//funcion auxiliar 
void mostrarPC(Tcompu pc);

int main()
{
    //carga de datos
    Tcompu pc[5];
    int cantidad=5;
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    srand(time(NULL));
    //cargo el arreglo pc con datos aleatorios
    for (int i = 0; i < 5; i++)
    {
        pc[i].velocidad=1+rand()%(3-1+1);
        pc[i].year=2015+rand()%(2024-2015+1);
        pc[i].cantidad_nucleos=1+rand()%(8-1+1);
        pc[i].tipo_cpu=tipos+(rand()%6);
    }

    //utilizo funciones

    //funcion listar pcs
    listarPCs(pc,cantidad);
    //funcion pc mas vieja
    mostrarMasVieja(pc,cantidad);

    return 0;
}
//desarrollo de funciones
//funcion auxiliar
void mostrarPC(Tcompu pc){
    
    printf("Velocidad: %d GHz\n",pc.velocidad);
    printf("Year: %d\n",pc.year);
    printf("Nucleos: %d\n",pc.cantidad_nucleos);
    printf("Tipo CPU: %s\n",pc.tipo_cpu);
    printf("\n");
}



void listarPCs(Tcompu pc[], int cantidad){
    for (int i = 0; i < cantidad; i++)
    {
        mostrarPC(pc[i]);
    }
    

}

void mostrarMasVieja(Tcompu pc[], int cantidad){
    //var aux
    int max=3000,p;//variable guada el maximo y p la posicion del mismo
    printf("------PC mas Vieja------\n");
    for (int i = 0; i < cantidad; i++)
    {
        if (pc[i].year<max)
        {
            p=i;
            max=pc[i].year;
        }
    }
    mostrarPC(pc[p]);
}