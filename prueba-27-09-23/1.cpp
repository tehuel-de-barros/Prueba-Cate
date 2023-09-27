/*
 Teoria
1) Difinicion de sistema informatico
2) Escriba la difinicion de dato,informacion y proceso
3) Que es una variable


Respuestas: 

1) La definicion de sistema: elementos que conviven entre si para un fin comun y la de sist.Informatico seria 
lo mismo pero para un ambito informatico, hay que tener en cuenta los factores mas importantes de un sist.Informatico que son 
los datos, informacion, procesos y el factor humano, y como relacionar estos // (bien)

2) Dato: Los datos son lo que usa un sistema es decir sus datos como numeros o string, 
cada lenguaje tiene los suyos, pero la mayoria coinciden en INT, CHAR, STRING, BOOLEANOS, entre otros

   Proceso: El proceso es la accion que realiza el sistema con los datos que tiene en esta accionar transfroma los datos 
   de datos a informacion
   
   Informacion: La informacion es lo que nos otorga el sistema, como por asi decirlo el resultado de los procesos de este.
   En otras palabras es el resultado del proceso de datos dentro de un sistema
   
3) Una variable es un espacio de memoria donde podemos guardar datos.
*/

/*
 Practica
 
1) Crear un programa que tras asignar los numeros -2, 5, 8, -9, 10, 15 y -4 a un arreglo calcule e informe independintemente
la suma de los elementos positivos y la suma de los negativos

*/ 

#include <stdio.h>

int main() { 

	int arr[7] = { -2, 5, 8, -9, 10, 15, -4 }; 
	int sumpos = 0;
	int sumneg = 0;
	for(int i = 0; i < 7; i++) { 
		printf("%d ", arr[i]);
	}
	
	for(int i = 0; i < 7; i++) { 
		if(arr[i] > 0) {
			sumpos += arr[i];
		}
		else { 
			sumneg += arr[i];
		}
	}
	
	printf("\n La suma de los postivos es: %d", sumpos);
	printf("\n La suma de los negativos es: %d", sumneg);
	return 0; 
}
 

