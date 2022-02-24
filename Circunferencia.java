package MiCodigo;

public class Circunferencia {
	//ATRIBUTOS
    int coordX;
    int coordY;
    float radio;
    //CONSTRUCTOR
    public Circunferencia(int coordX,int coordY,float radio){
        this.coordX=coordX;
        this.coordY=coordY;
        this.radio=radio;
    }
    //MÉTODOS SET GET
    void setcoordX(int coordX){
        this.coordX=coordX;
    }
    void setcoordY(int coordY){
        this.coordY=coordY;
    }
    void setradio(float radio){
        this.radio=radio;
    }
    int getcoordX(){
        return coordX;
    }
    int getcoordY(){
        return coordY;
    }
    float getradio(){
        return radio;
    }
}