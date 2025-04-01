#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CANT_COMPUS 5

struct compu {
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio; // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char * tipo_cpu;
} typedef PC;

PC compus[CANT_COMPUS];
char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

int generarVelocidad(){
    return (1 + rand() % 3);
}
int generarAnio(){
    return (2015 + rand() % (2024 - 2015 + 1));
}
int generarNucleos(){
    return (1 + rand() % 8 - 1 + 1);
}

void listarPCs(PC pcs[], int cantidad){
    for (int i = 0; i < cantidad; i++)
    {
        printf("PC %d \nVelocidad: %dGHz\tAnio Fabricacion: %d\tNucleos: %d\tCPU: %s\n", i+1,pcs[i].velocidad,pcs[i].anio,pcs[i].cantidad_nucleos,pcs[i].tipo_cpu);
    }
    
}

void mostrarMasVieja(PC pcs[], int cantidad){
    int anio = 2025;
    PC antigua;
    for (int i = 0; i < cantidad; i++)
    {
        if (pcs[i].anio < anio)
        {
            antigua = pcs[i];
            anio = pcs[i].anio;
        }
        
    }
    printf("PC mas antigua \nVelocidad: %dGHz\tAnio Fabricacion: %d\tNucleos: %d\tCPU: %s\n" ,antigua.velocidad,antigua.anio,antigua.cantidad_nucleos,antigua.tipo_cpu);
}

int main(){
    srand(time(NULL));
    for (int i = 0; i < CANT_COMPUS; i++)
    {
        PC aux = {
            generarVelocidad(),
            generarAnio(),
            generarNucleos(),
            tipos[rand()%6]
        };
        
        compus[i] = aux;
    }
    listarPCs(compus, CANT_COMPUS);
    mostrarMasVieja(compus, CANT_COMPUS);
}