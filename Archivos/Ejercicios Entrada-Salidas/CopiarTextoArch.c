//Utilizar la función fputc() para introducir caracteres en un archivo de texto (.txt)

#include<stdio.h> //Libreria de entrada y salida
#include<stdlib.h> //Libreria estandar

FILE *fd; //Apuntador al archivo

int main(){ //Función principal

    //Declaraciones de variables
    int c;
    char direccion[] = "C:\\Users\\river\\OneDrive\\Documents\\Curso de C\\Archivos\\prueba.txt";

    fd = fopen (direccion, "wt"); //Se abre el archivo. wt para escribir texto (write text)

    if(fd == NULL){ //Si no se encuentra el archivo
        printf("Error al crear el archivo");
        return -1;
    }

    while((c = getchar()) != EOF){ //Mientras c sea diferente al final del archivo
        fputc(c, fd); //Se ingresan los carcateres
    }

    fclose(fd); //Se cierra el archivo
    
    return 0; //Se termina el programa
}