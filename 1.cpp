/*
diferencias entre un procedimiento y una funcion()
splasehamiento de variable, tipo de dato
*/
//realizar un programa q permita los datos del ingreso de un empleado y su salario y me informe cual cobra mas y cual combra menos 
// 1) No tiene muchas ambas sirven para procesar y alamcenar un framento de codigo
// que puede ser reutilizada, pero su diferencia mas importante es la una retorna 
//un valor(funcion) y la otra no(procedimiento)

// 2) una variable es un dato q utilizamos y almacenamos y puede variar, cada variable tiene su scope o rango eso es lo mas 
// novedozo q vimos, es importante saberlo ya que una variable con el mismo tipo de dato y mismo nombre y valor puede ser una distinta.

/*
int hola(){
 int a; 
}

int main() {
	int a;
}
 aunque no parezca son distintos;
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

struct empleado { 
	int id; 
	char nombre[50]; 
	int salario; 
};
struct empleado EMPLEADO[5];

/*void cobros() { 
	int cobramas;
	int cobramenos;
	for(int j = 0; j < 5; j++) { 
		if(EMPLEADO[j].salario < EMPLEADO[j + 1].salario) { 
			cobramas = j;
		}
		if(EMPLEADO[j].salario > EMPLEADO[j + 1].salario){
			cobramenos = j;
		}
	}
	
	printf(" \n El empleado q mas cobra es: %s", EMPLEADO[cobramas].nombre);
	printf(" \n El empleado q mas cobra es: %s", EMPLEADO[cobramenos].nombre);
	
}
*/


int main() { 
	srand(time(NULL));
	
	bool flag = true;
	int i = 0; 
	for(int j = 0; j < 5; j++) { 
		EMPLEADO[j].id = 0;
		EMPLEADO[j].salario= 0;
	}
	do { 
		EMPLEADO[i].id = rand() % 100;
		printf("\n Ingrese el nombre del emepleado: ");
		scanf("%s", &EMPLEADO[i].nombre);
		printf("\n Ingrese el salario: ");
		scanf("%d", &EMPLEADO[i].salario);
		if(EMPLEADO[i].salario == 0) { 
			flag = false; 
		}
		i++;
		if(i == 5){
			flag = false;
		}
	} while(flag == true);
	//printf("\n %d", i);
	for(int j = 0;j < 5; j++) { 
		printf("\n ID: %d  \n NOMBRE: %s \n SALRARIO: %d", EMPLEADO[j].id,EMPLEADO[j].nombre,EMPLEADO[j].salario );
	}
/*	
	int cobramas;
	int cobramenos;
	for(int j = 0; j < 4; j++) { 
		if(EMPLEADO[j].salario < EMPLEADO[j + 1].salario) { 
			cobramas = j;
		}
		if(EMPLEADO[j].salario > EMPLEADO[j + 1].salario){
			cobramenos = j;
		}
	}
	*/	
	printf("\n");
	int hola;
	do { 
		hola = 0; 
		for(int j = 0; j < 5; j++) { 
			if(EMPLEADO[j].salario < EMPLEADO[j + 1].salario){ 
				int aux = EMPLEADO[j].salario;
				EMPLEADO[j].salario = EMPLEADO[j + 1].salario;
				EMPLEADO[j + 1].salario = aux; 
				hola = 1;
			}
		}
	}while (hola == 1);
	printf("\nSALRARIO: %d", EMPLEADO[0].salario );
	printf("\n SALRARIO: %d", EMPLEADO[4].salario );
	/*
	int hola2;
	int aux = 0; 
	do { 
		hola2 = 0; 
		for(int j = 0; j < 5; j++) { 
			if(EMPLEADO[j].salario > EMPLEADO[j + 1].salario){ 
				aux = EMPLEADO[j].salario;
				EMPLEADO[j].salario = EMPLEADO[j + 1].salario;
				EMPLEADO[j + 1].salario = aux; 
				hola2 = 1;
			}
		}
		
	}while (hola2 == 1);
*/
	/*
	for(int j = 0;j < 5; j++) { 
		printf("\n ID: %d  \n NOMBRE: %s \n SALRARIO: %d", EMPLEADO[j].id,EMPLEADO[j].nombre,EMPLEADO[j].salario );
	}
	*/
	
//	printf(" \n El empleado q mas cobra es: %s", EMPLEADO[cobramas].nombre);
//	printf(" \n El empleado q mas menos es: %s", EMPLEADO[cobramenos].nombre);
	
	
	//cobros();

	
	
	return 0; 
}
