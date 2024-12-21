#include <stdio.h>

int main()
{
    int el_array[] = {6, 5, 4, 3, 2, 1};
    int *punt1, *punt2;

    punt1 = &el_array[0];
    punt2 = el_array;

    printf("\n");
    printf("Dirección de inicio del array = %p \n", &el_array[0]);
    printf("Contenido de la primera posición del array = %d \n", el_array[0]);
    printf("\n");
    printf("Dirección apuntada por punt1 = %p \n", punt1);
    printf("Contenido de la posición apuntada por punt1 = %d \n", *punt1);
    printf("\n");
    printf("Dirección apuntada por punt2 = %p \n", punt2);
    printf("Contenido de la posición apuntada por punt2 = %d \n", *punt2);
    printf("\n");
}
