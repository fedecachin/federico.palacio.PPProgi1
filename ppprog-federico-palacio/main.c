#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char nombre[20];
    int infctados;
    int recuperados;
    int muertos;
} ePais;

void actualizarRecuperados(ePais pais, int recuperadosDia);

int main()
{
    ePais pais;

    int recuperadosEnElDia = 80;

    pais.recuperados = 50;

    actualizarRecuperados(pais, recuperadosEnElDia);

}

void actualizarRecuperados(ePais pais, int recuperadosDia)
{

   pais.recuperados = pais.recuperados + recuperadosDia;

}
