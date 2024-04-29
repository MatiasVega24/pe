#include <stdio.h>
#include <string.h>

#define MAX_DATOS 100

int main() {
    int contador = 0;

    float estatura, total_estatura = 0.0, promedio_estatura;

    char datos[MAX_DATOS][10];

    char opcion;

    char buffer[10]; 

    do {
        printf("\nMenú:\n");

        printf("1. Ingresar estatura\n");

        printf("2. Calcular promedio de estatura\n");

        printf("3. Calcular suma de estaturas\n");

        printf("4. Mostrar número total de datos ingresados\n");

        printf("5. Salir del programa\n");

        printf("Ingrese su opción: ");

        scanf(" %c", &opcion);

        switch(opcion) {
            case '1':
                printf("\nIngrese la estatura (en metros): ");
                scanf("%s", buffer);

                if (contador < MAX_DATOS) {
                    strcpy(datos[contador], buffer); 
                    contador++;
                } else {
                    printf("Se ha alcanzado el máximo de datos permitidos.\n");
                }
                break;

            case '2':
                if (contador == 0) {
                    printf("\nNo se han ingresado datos.\n");
                } else {
                    for (int i = 0; i < contador; i++) {
                        total_estatura += atof(datos[i]); 
                    }
                    promedio_estatura = total_estatura / contador;
                    printf("\nEl promedio de estatura es: %.2f metros\n", promedio_estatura);
                }
                break;

            case '3':
                if (contador == 0) {
                    printf("\nNo se han ingresado datos.\n");
                } else {
                    for (int i = 0; i < contador; i++) {
                        total_estatura += atof(datos[i]); 
                    }
                    printf("\nLa suma de todas las estaturas ingresadas es: %.2f metros\n", total_estatura);
                }
                break;

            case '4':
                printf("\nEl número total de datos ingresados es: %d\n", contador);
                break;
            case '5':
                printf("\nSaliendo del programa...\n");
                break;
                
            default:
                printf("\nOpción no válida. Por favor ingrese un número entre 1 y 5.\n");
        }

    } while (opcion != '5');

    return 0;
}