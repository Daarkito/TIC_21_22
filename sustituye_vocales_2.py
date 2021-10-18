def sustituye_vocales_2():
    palabra=raw_input ("PALABRA: ")
    cont=0
    while (palabra[cont]!='\0'):
        if (palabra[cont]=='a'):
            print ('u')
        else:
            if (palabra[cont]=='e'):
                print ('u')
            else:
                if (palabra[cont]=='i'):
                    print ('u')
                else:
                    if (palabra[cont]=='o'):
                        print ('u')
                    else:
                        print (palabra[cont])
        cont=cont+1
       
    print ("Palabra transformada "+palabra)

sustituye_vocales_2()
