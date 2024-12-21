#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

#define LONGITUD 30

int main()
{
    char buffer[LONGITUD] = "Cadena recibida en buffer";
    char *p_cadena = NULL;
    int i, l_cadena;

    /* Determinamos la longitud de la cadena recibida */

    l_cadena = strlen(buffer);
    printf("\n");
    printf("La cadena recibida tiene %d caracteres de longitud\n\n", l_cadena);

    /* Se reservan (lcadena + 1) caracteres de memoria dinámica */

    p_cadena = (char *)malloc((l_cadena + 1) * sizeof(char));
    if (p_cadena == NULL)
    {
        /* Siempre se debe comprobar el éxito de la allocación */
        printf("Error allocando memoria\n");
        exit(-1); /* Se devuelve un código de error */
    }

    /* Ahora, hacemos una copia de la cadena recibida en el buffer */

    strncpy(p_cadena, buffer, l_cadena + 1);

    /* Comprobamos el resultado */

    printf("La cadena apuntada por p_cadena es = %s\n\n", p_cadena);

    /* Liberamos la memoria */

    free(p_cadena);
}
