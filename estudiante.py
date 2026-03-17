import os

totalEst = 0
sumaProm = 0
idMejor = " "
apeMejor = " "
nomMejor = " "
mejorProm = 0

seguir = 'S'

while seguir == 'S':

    idEst = input("Identificacion del estudiante : ")
    apellido = input("Apellidos del estudiante : ")
    nombre = input("Nombres del estudiante : ")

    totalMat = 0
    sumaNotas = 0

    opcion = 'S'

    while opcion == 'S':

        codigoMat = input("Código de la materia : ")

        nota1 = float(input("Nota 1 30% : "))
        nota2 = float(input("Nota 2 30% : "))
        nota3 = float(input("Nota 3 40% : "))

        notaFinal = (nota1*30/100) + (nota2*30/100) + (nota3*40/100)

        totalMat += 1
        sumaNotas += notaFinal

        print("Nota definitiva:", round(notaFinal,2))

        opcion = input("¿Ingresa una nueva materia [S/N]? ")

    promEst = sumaNotas / totalMat
    sumaProm += promEst
    totalEst += 1

    if promEst > mejorProm:
        idMejor = idEst
        apeMejor = apellido
        nomMejor = nombre
        mejorProm = promEst

    print()
    print("Promedio del estudiante:", round(promEst,2))
    print()
    seguir = input("¿Desea ingresar un nuevo estudiante [S/N]? ")

promGrupo = sumaProm / totalEst

print()
print("Numero de estudiantes:", totalEst)
print("Promedio del grupo:", round(promGrupo,2))

print()
print("Estudiante con mejor promedio")
print(idMejor, apeMejor, nomMejor, round(mejorProm,2))
