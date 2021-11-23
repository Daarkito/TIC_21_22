def diagrama():
    num=input ("dame un numero: ")
    sumita=1
    for cont in range (num,-1,-1):
        print (cont,sumita)
        sumita=sumita*cont
       
diagrama()
