#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define MIN 1
#define MAX 50
#define MAX_INTENTS 10

int main()
{
    int numero;
    int numuser;
    bool correcto=false;
    int i;
    srand (time(NULL));     // en lo que se basa el numeroaleatorio
    numero = rand ()% (MAX - MIN + 1);    //numero aleatorio
    printf("\nEl numero es: %i\n",numero);
    printf("Bienvenido");
    for(i=0;((i<=MAX_INTENTS)&&(correcto==false));i++){   //doble condicion
        printf("Escriba un numero\n");
        scanf("%i",&numuser);
        if(numuser<numero){
            printf("El numero debe ser mayor\n");

        }
        else{
            if(numuser>numero){
                printf("El numero debe ser menor\n");
            }
            else{
                correcto=true;
                printf("Enhorabuena has acertado\n");
                return 0;
            }
        }
    }

        printf("El numero de intentos se ha acabado\n");

}
