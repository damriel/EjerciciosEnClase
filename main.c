#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Un error que no logré solucionar es que sin ingresar segundo apellido
 * y apretando enter, al final queda guardado y desfasa el formato final
 */

int main()
{
    char apellidoUnoOrig[15];
    char apellidoDosOrig[15];
    char apellidoUno[15];
    char apellidoDos[15];
    char nombreUnoOrig[15];
    char nombreDosOrig[15];
    char nombreUno[15];
    char nombreDos[15];

    /**
     * Pido los datos, los copio en otro array para mantener los originales
     * y saco el "\n" de los fgets() en el nuevo array
     */
    printf("Ingrese su primer apellido: ");
    fgets(apellidoUnoOrig, 15, stdin);
    strcpy(apellidoUno, apellidoUnoOrig);
    strtok(apellidoUno, "\n");
    printf("\nIngrese su segundo apellido: ");
    fgets(apellidoDosOrig, 15, stdin);
    strcpy(apellidoDos, apellidoDosOrig);
    strtok(apellidoDos, "\n");

    printf("\nIngrese su primer nombre: ");
    fgets(nombreUnoOrig, 15, stdin);
    strcpy(nombreUno, nombreUnoOrig);
    strtok(nombreUno, "\n");
    printf("\nIngrese su segundo nombre: ");
    gets(nombreDosOrig);
    strcpy(nombreDos, nombreDosOrig);
    strtok(nombreDos, "\n");

    /**
     * Formateo segun consigna
     */
    strlwr(apellidoUno);
    apellidoUno[0]=toupper(apellidoUno[0]);
    strlwr(apellidoDos);
    apellidoDos[0]=toupper(apellidoDos[0]);

    strlwr(nombreUno);
    nombreUno[0]=toupper(nombreUno[0]);
    strlwr(nombreDos);
    nombreDos[0]=toupper(nombreDos[0]);

    /**
     * Imprimo todos los datos formateados.
     */
    printf("\n\t%s %s, %s %s\n", apellidoUno, apellidoDos, nombreUno, nombreDos);

    return 0;
}
