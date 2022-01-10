#include<stdio.h>


int main(){
	char palabra[5];
	int cont;
	printf("Escribe una palabra: ");
	scanf("%s",palabra);
	printf("\nHAS ESCRITO LA PALABRA %s",palabra);
	printf("\nVOY A DELETREARLA: ");
	for(cont=0;cont<5;cont++){
		printf("\n%c",palabra[cont]);
	}
	return(0);
	
}
