def fecha_mes_2():
    fecha=raw_input ("Introduce la fecha (dd/mm/aa): ")
    numero_mes=int (fecha[3])*10+int (fecha[4])
    nombres_meses="Enero,Febrero,Marzo,Abril,Mayo,Junio,Julio,Agosto,Septiembre,Octubre,Noviembre,Diciembre,"
    print (numero_mes)
    numero_comas=0
    cont=0
    mes=""
    while (numero_comas<=numero_mes-1):
        if (numero_comas==numero_mes-1):
            mes=mes+nombres_meses[cont]
        if (nombres_meses[cont]==','):
             numero_comas=numero_comas+1
             
        cont=cont+1
    print ("cont= "+str(cont))
    print ("comas= "+str(numero_comas))
    print ("Estoy en el mes de "+mes)
       
fecha_mes_2()
