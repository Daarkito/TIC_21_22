def cuenta_letras():
   
    palabra=raw_input ("Diga una palabra: ")
    vocal=0
    consonante=0
    cont=0
   
    while (cont<len(palabra)):
        if (palabra[cont]in "aeiou"):
            vocal=vocal+1
        else:
            consonante=consonante+1
                           
        cont=cont+1
       
    print ("Vocales: "+str(vocal))
    print ("Consonantes: "+str(consonante))
    print ("Numero total: "+str(vocal+consonante))
   
   
cuenta_letras()
