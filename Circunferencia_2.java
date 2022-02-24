package MiCodigo;

public class Circunferencia_2 {
	//ATRIBUTOS
    int coordX;
    int coordY;
    double radio;
    //CONSTRUCTOR
    public Circunferencia_2(int coordX,int coordY,double radio){
        this.coordX=coordX;
        this.coordY=coordY;
        this.radio=radio;
    }
    //MÉTODOS SET GET
    public void setcoordX(int coordX){
        this.coordX=coordX;
    }
    public void setcoordY(int coordY){
        this.coordY=coordY;
    }
    public void setradio(double radio){
        this.radio=radio;
    }
    public int getcoordX(){
        return coordX;
    }
    public int getcoordY(){
        return coordY;
    }
    public double getradio(){
        return radio;
    }
    public double devuelveArea(){
    double area;
    area=Math.PI*Math.pow(radio, 2);
    return area;
    }
    public double devuelveLongitud(){
    double longitud;
    longitud=2*Math.PI*radio;
    return longitud;
    }
   

}