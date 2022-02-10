package MiCodigo;

public class MiParejaNumeros {
//Atributos=Variables

int num1;
int num2;

//Constructor

public MiParejaNumeros(int num1Externo,int num2Externo){
num1=num1Externo;
num2=num2Externo;
}

//Métodos set/get

void setNum1(int num1Externo){
num1=num1Externo;
}
void setNum2(int num2Externo) {
num2=num2Externo;
}
int getNum1() {
return num1;
}
int getNum2() {
return num2;
}

//Métodos=Funciones

public int devuelveSuma() {
return (num1+num2);

}
public int devuelveResta() {
return (num1-num2);

}
public int devuelveMultiplicacion() {
return (num1*num2);

}
public int devuelveDivision() {
return (num1/num2);

}

}