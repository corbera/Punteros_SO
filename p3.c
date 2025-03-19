
#include <stdio.h>
#include <string.h>

#define LONGITUD 32

int main()
{
    char buffer[LONGITUD];
    char buffer2[LONGITUD] = "Esto no !!";
    char *p_cadena;
    int i, j;

    j = 0;
    for (i = 0; i < LONGITUD; i++)
    {
        buffer[i] = j + 0x30; /* Código ASCII del dígito */
        j++;
        if (j > 9)
            j = 0; /* Vuelve a 0 tras el 9 */
        /* OJO: El buffer no contiene todavía una cadena; no está terminada en 0!! */
    }

    p_cadena = buffer;

    printf("\n");
    printf("La longitud del buffer es %d \n", LONGITUD);
    printf("La cadena más larga que puede albergar este buffer es, por tanto, de %d caracteres \n\n", LONGITUD - 1);
    printf("Iterando con el puntero, el contenido del buffer es =");
    for (i = 0; i < LONGITUD; i++)
    {
        /* Imprimimos en pantalla el contenido del buffer */
        printf("%c", *(p_cadena++));
    }
    printf("\n");
    printf("Iterando sobre el array, el contenido del buffer es =");
    for (i = 0; i < LONGITUD; i++)
    {
        /* Imprimimos en pantalla el contenido del buffer */
        printf("%c", buffer[i]);
    }
    printf("\n\n");
    printf("Ahora, intentamos imprimir como cadena el contenido del buffer\n");
    printf("El contenido del buffer es =");
    j = printf("%s", buffer);
    printf("\n");
    printf("printf reporta haber impreso %d caracteres \n\n", j);
}
