def cambia_vocales():
    palabra=raw_input ("Dime que palabra quieres: ")
    vocal=raw_input ("Dime la vocal que quieres: ")
    nueva_palabra=" "
    cont=0
    while (cont<len(palabra)):
        if (palabra[cont]=='a'):
            nueva_palabra=nueva_palabra+vocal
        else:
            if (palabra[cont]=='i'):
                nueva_palabra=nueva_palabra+vocal
            else:
                if (palabra[cont]=='e'):
                    nueva_palabra=nueva_palabra+vocal
                else:
                    if (palabra[cont]=='o'):
                        nueva_palabra=nueva_palabra+vocal
                    else:
                        if (palabra[cont]=='u'):
                            nueva_palabra=nueva_palabra+vocal
                        else:
                            nueva_palabra=nueva_palabra+(palabra[cont])
                
        cont=cont+1

    print ("palabra transformada "+nueva_palabra)

cambia_vocales()
