 #include<stdio.h>

int main(){
    float x[10];
    int cont;
    float suma=0;
    float media;
    //for cont in range (1,10):
    //cont++ equivale a cont=cont+1
    /*while(cont<=10){
        ...
        cont++;
    }*/
    //LEO DATOS DEL TECLADO
    for(cont=0;cont<=10;cont++){
        //num=input("Dame un numero: ")
        printf("Dame un numero: ");
        scanf("%f",&x[cont]);//
       
    }
    //ESCRIBO DATOS EN LA PANTALLA
    for (cont=0;cont<10;cont++){
        printf ("\n%f",x[cont]);
        suma+=x[cont];
        //suma=suma+x[cont]
    }
    media=suma/cont
    printf ("\nLA MEDIA VALE= %.2f",media);
   
    return (0);
   
   
}
