def piramide_numerica():
    fila_completa=""
    num=input ("Dame un numero wachin: ")
    for fil in range (num,0,-1):
        for col in range (1,fil+1):
            fila_completa=fila_completa+str(fil)
        print (fila_completa)
        fila_completa=""
       
       
piramide_numerica()
