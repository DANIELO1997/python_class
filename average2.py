print("uncentavomas")
intentos = 1
clave = "1997"
contraseña = input("Ingrese su clave:")
saldo = 500000 
if contraseña == clave:
    print("El ingreso fue exitoso")
    print("menu transaccional")
    print("1: cambiar clave")
    print("2: mostrar saldo")
    print("3: realizar retiro")
    print("4: salir")
    opcion=input("digita una opcion")
    print(".: digite opcion")
 
else:
    while contraseña != clave:
        contraseña = input("ingrese su clave:")
        intentos += 1 
        if intentos == 3 : 
            print("clave no valida,")
            break
if opcion == "1" :
    print("cambio de clave")
contraseña = input("Ingrese su clave:")
if opcion == "2" :
    print("mostrar saldo")
print("su saldo es:",saldo)
if opcion == "3" :
    print("submenu")
    print("1.$10000")
    print("2.$20000")
    print("3.$50000")
    print("4.$100000")
    print("5.$200000")
    print("6.$400000")
    print("7.$600000")
    print("8.$1000000")
    monto=input("digite la opcion del nonto a retirar")
    if monto == "1" :
        saldo = saldo-10000
        print("retiro exitoso ")
    if monto == "2" :
        saldo = saldo-20000
        print("retiro exitoso")
    if monto == "3" :
        saldo = saldo-500000
        print("retiro exitoso")
    if monto == "4" :
        saldo = saldo-100000
        print("retiro exitoso")
    if monto == "5" :
        saldo = saldo-200000
        print("retiro exitoso")
    if monto == "6" :
        saldo = saldo-400000
        print("retiro exitoso")
    if monto == "7" :
        saldo = saldo-600000
        print("retiro exitoso")
    if monto == "8" :
        saldo = saldo-1000000
        print("retiro exitoso")
    
