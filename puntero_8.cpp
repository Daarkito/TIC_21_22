#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
	//RESERVA DINAMICA DE MEMORIA
	char aux[100]; //RESERVO VARIABLE AUXILIAR PARA GUARDAR DE MOMENTO LA PALABRA
	int longitud; //Defino el tamano
	printf("\nDime una palabra: ");
	scanf("%s",aux);
	longitud= strlen(aux);
	char *palabra; //palabra es un puntero (UNA VARIABLE QUE CONTIENE UNA DIRECCIÓN DE MEMORIA DE ALGO QUE ES UNA LETRA)
	palabra=(char*) malloc(longitud*sizeof(char)); //MEMORY ALLOCATION
	strcpy(palabra,aux);
	printf("\nRESULTADO: ");
	printf("%s",palabra);

	return(0);
	
}
