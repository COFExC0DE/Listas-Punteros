
struct nodo{

    int informacion;//Donde se guarda la información
    struct nodo* siguiente;
};

//guarda y crea el espacio en memoria para  crear el nodo
struct nodo* crear(int dato){

		struct nodo* nuevo;
		nuevo = (struct nodo *)malloc(sizeof(struct nodo));//crea espacio en memoria
		nuevo->informacion = dato;//asigra el dato a informacion en el memoria
		nuevo->siguiente = NULL;//deja el sigiente puntero apuntando a null para ingresar un nuevo valor
		//Crea el nodo
		return nuevo;
	}

struct nodo* agregarEnLista(struct nodo* cabeza_lista, int elemento){


      struct nodo* indice = cabeza_lista;

      if(cabeza_lista == NULL){
            printf("Primer Valor Guardado\n");
            cabeza_lista = crear(elemento); //con esto si es el primer nodo se apunta con el puntero al inicio de la lista
      }
      else if(cabeza_lista!=NULL){
        while(indice->siguiente!=NULL){//busca el valor sigiente que apunte a NULL para optener el espacio para asignar el nuevo valor
            indice=indice->siguiente;}
        indice->siguiente = crear(elemento);
        }

         return indice;
    }

//recorrer lista para mostrarla en pantalla
void mostrar_lista(struct nodo * cabeza_lista){

      int i = 0;
      struct nodo* indice = cabeza_lista;
      //indice = cabeza_lista;
      printf("\nMostrando la lista completa:\n");
      while (indice!=NULL) {
                printf("%d", indice->informacion);//muestra la lista  en pantalla apuntado a los valores guardados
                printf("--");

            indice = indice->siguiente;
            i++;//si la i es 0 entonces eso quiere decir que no hay nada en la lista, de ser mayor que cero entoncesquiere decir que no esta vacia
      }
      if (i==0) printf( "\nLa lista está vacía!!\n" );
}
