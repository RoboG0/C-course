/*
Sentencia IF

if(condicion){
	accion
}

*/
#include<stdio.h> //Libreria estandar

int main(){ //Funcion principal
	
	float a, b, c; //Declaracion de variables flotantes
	
	printf("Ingrese el primer numero: "); //Ingreson de datos
	scanf("%f", &a); //Escaneo de datos
	printf("Ingrese el segundo numero: "); //Ingreson de datos
	scanf("%f", &b); //Escaneo de datos
	
	c = a + b; //Operacion y asignacion
	
	if(a + b > 200){ //Sentencia if con condicion
		printf("El resultado es mayor a 200 y es %f\n", c); //Impresion de condicion
	}if(a + b < 200){ //Sentencia if con condicion
		printf("El resultado es menor a 200 y es %f\n", c); //Impresion de condicion
	}if(a + b == 200){ //Sentencia if con condicion
		printf("\nEl resultado es %.2f", c); //Impresion de condicion
	}
	
	return 0; //Termina el programa
}
