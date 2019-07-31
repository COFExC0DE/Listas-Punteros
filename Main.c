#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tarea_lista.h"

 int main(){
    char opcion;
    int numero;

    struct nodo* cabeza_lista = crear(0);
    // ciclo para ir cradon y mostrando la nueva lista
    do{
        //menu
        printf("\n\n Menú:\n\n");
        printf("1.- Añadir a la lista\n");
        printf("2.- Imprimir lista\n");
        printf("3.- Salir\n\n");
        printf("Escoge una opción(1,2,3): ");

        scanf("%s", &opcion);

        if(opcion == '1'){
                printf("ingrese el numero entero que desee guardar: ");
                scanf("%d", &numero);
                printf("\n \n %d", numero);
                cabeza_lista = agregarEnLista(cabeza_lista, numero);//ingresa un numero, para ir agregandolo a la lista
         }
        else if(opcion == '2'){
         	mostrar_lista(cabeza_lista);//ingresa toda la lista, la recorre y muestra en pantalla todos los valores guardados
         }
        else{
            printf("\n Fin del programa \n\n\n\n");
            break;

         }
     }while(opcion != 3);
 }
