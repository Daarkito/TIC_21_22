def cuadrado_numerico():
    fila=""
    num=input("Dame un numerito guapo: ")
    for fil in range (1,num+1):
        for col in range (1,num+1):
            fila=fila+"1"
        print (fila)
        fila=""
       
       
cuadrado_numerico()
