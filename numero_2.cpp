#include<stdio.h>

int main(){
    int x[10];
   
    //for cont in range (1,10):
    //cont++ equivale a cont=cont+1
    /*while(cont<=10){
        ...
        cont++;
    }*/
    for(cont=1;cont<=10;cont++){
        //num=input("Dame un numero: ")
        printf("Dame un numero: ");
        scanf("%d",&x[cont]);//
       
    }
    for (cont=0;cont<10;cont++){
        printf ("%d", x[cont]);
    }
    return (0);
   
   
   
}
