def cuadrado_numerico_2():
    fila=""
    num=input("Dame un numerito guapo: ")
    for fil in range (1,num+1):
        for col in range (1,num+1):
            if (fil % 2 ==0):
                fila=fila+"0"
            else:
                fila=fila+"1"
               
        print (fila)
        fila=""
       
       
cuadrado_numerico_2()
