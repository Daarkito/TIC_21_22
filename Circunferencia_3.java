package MiCodigo;

public class Circunferencia_3 {
private Circunferencia_3 centroCirculo;
private double radio;
/**
* @param coordX
* @param coordY
* @param radio
*/
public Circunferencia_3(int coordX, int coordY, double radio) {
super();
centroCirculo=new Circunferencia_3(coordX,coordY, radio);
this.radio = radio;
}

/**
* @return the coordX
*/
public int getCoordX() {
return(centroCirculo.getNum1());
}
private int getNum1() {
	// TODO Auto-generated method stub
	return 0;
}

/**
* @param coordX the coordX to set
*/
public void setCoordX(int coordX) {
centroCirculo.setNum1(coordX);
}
private void setNum1(int coordX) {
	// TODO Auto-generated method stub
	
}

/**
* @return the coordY
*/
public int getCoordY() {
return(centroCirculo.getNum2());
}
private int getNum2() {
	// TODO Auto-generated method stub
	return 0;
}

/**
* @param coordY the coordY to set
*/
public void setCoordY(int coordY) {
centroCirculo.setNum2(coordY);
}
private void setNum2(int coordY) {
	// TODO Auto-generated method stub
	
}

/**
* @return the radio
*/
public double getRadio() {
return radio;
}
/**
* @param radio the radio to set
*/
public void setRadio(double radio) {
this.radio = radio;
}
public double devuelveArea(){
double area;
area=Math.PI*Math.pow(radio, 2);//También se puede poner radio*radio
System.out.println("En la clase, area= "+area);
return area;
}
public double devuelveLongitud() {
double longitud;
longitud=2*Math.PI*radio;
return longitud;
}



}

