/* APROBADA

2) Crear un programa que mediente un menu perimite consultar, asignar y modificar y eliminar datos de un
vector de tipo entero de  20 pisiciones. 
Para realizar las operaciones de debe la posicion del vector a la cual se desea acceder 

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() { 
	//srand(time(NULL));
	int arr[20];
	for( int i = 0; i < 20; i++) arr[i] = 0; 
	for(int i = 0; i < 20; i++) printf("%d ", arr[i]);

	int posicion; 
	printf("\n Seleccione la posicion que desea alterar: "); 
	scanf("%d", &posicion);
	
	int alter;
	printf("\n Que alteracion quiere realizar: 1.Consulta 2.asignar 3.modificar 4.eliminar: ");
	scanf("%d", &alter);

	int valor;
	
	switch(alter) {
		
		case 1: 
		for(int i = 0; i < 20; i++) { 
			if(i == posicion) { 
				printf("\n %d ", arr[i]);
			}
		}
		break;
		
		case 2: 
		for(int i = 0; i < 20; i++) { 
			if(i == posicion) { 
				printf("\n Ingrese el nuevo valor: ");
				scanf("%d", &valor);
				arr[i] = valor;
				
				//validacion
			}
		}
		for(int i = 0; i < 20; i++) printf("%d ", arr[i]);
		break;
		
		case 3: 
		for(int i = 0; i < 20; i++) { 
			if(i == posicion) { 
				printf("\n Ingrese el nuevo valor: ");
				scanf("%d", &valor);
				arr[i] = valor;
			}
		}
		for(int i = 0; i < 20; i++) printf("%d ", arr[i]);
		break;
		
		case 4: 
		for(int i = 0; i < 20; i++) { 
			if(i == posicion) { 
				arr[i] = -1; 
			}
		}
		for(int i = 0; i < 20; i++) printf("%d ", arr[i]);
		break;
	}
	
	
	return 0; 
}
