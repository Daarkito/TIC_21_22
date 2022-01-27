#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//ORDENAR POR LA LONGITUD

int main(){
    //RESERVA DINAMICA DE MEMORIA
    char provisional[10];
    char *aux; //reservo una variable auxiliar para guardar de momento la palabra
    int longitud; //Defino el tamano
    char *mispalabras[5];
    int cont;
    int repetir;
    for(cont=0;cont<5;cont++){
        //1. Pido la palabra
        printf("\nDime la palabra %d: ",cont);
        //2. Lo guardo en una variable auxiliar
        scanf("%s",provisional);
        //3. Cuento el numero de letras
        longitud=strlen(provisional);
        printf("\n MIDE %d",longitud);
        //4. Busco un hueco en la memoria de ese tamano y me apunto su direccion
        mispalabras[cont]=(char *)malloc(longitud*sizeof(char));
        //5. Copio el nombre desde auxiliar hasta el hueco encontrado
        strcpy(mispalabras[cont],provisional);
    }
    printf("\n LAS CINCO PALABRAS SON: "); //CONTIENE SPOILERS
    for(cont=0;cont<5;cont++){
        printf("\n %s",*(mispalabras+cont));
        //SUSTITUYO mispalabras[cont] POR *(mispalabras+cont)

    }
    //Las ordeno por tamanio
    //LA ORDENO DE MENOR A MAYOR
    for(repetir=1;repetir<5;repetir++){
        for(cont=0;cont<3;cont++){
            if(strlen(mispalabras[cont])>strlen(mispalabras[cont+1])){
                aux=mispalabras[cont];
                mispalabras[cont]=mispalabras[cont+1];
                mispalabras[cont+1]=aux;
            }
        }
    }
    //VUELVO A MOSTRAR LAS PALABRAS PERO ORDENADAS
    printf("\n LAS CINCO PALABRAS SON: "); //CONTIENE SPOILERS
    for(cont=0;cont<5;cont++){
        printf("\n %s",*(mispalabras+cont));
    }
return(0);

}
