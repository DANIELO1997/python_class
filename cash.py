#promedio edades
i = 1
sumaedades = 0
edad = 0
while i <= 10 :
    edad = int(input ("ingese edad: "))
    sumaedades =sumaedades + edad
    i = i + 1
promedio = sumaedades / 10
print("el promedio de las edades es: ", promedio)
