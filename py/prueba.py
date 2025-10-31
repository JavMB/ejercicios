# =====================================
# VARIABLES Y TIPOS (No se declara tipo explícito)
# =====================================
nombre = "Javi"
edad = 22
pi = 3.14
activo = True

print("Hola,", nombre, "tienes", edad, "años.")


# =====================================
# CONDICIONALES (if-else)
# =====================================
if edad >= 18:
    print("Eres mayor de edad")
else:
    print("Eres menor de edad")


# =====================================
# BUCLES
# =====================================
# For en Java -> for(int i=0; i<5; i++)
for i in range(5):
    print("Iteración:", i)

# While
contador = 0
while contador < 3:
    print("Contador:", contador)
    contador += 1


# =====================================
# FUNCIONES
# =====================================
def saludar(nombre):
    return f"Hola {nombre}!"


print(saludar("Mundo"))


# =====================================
# LISTAS (equivalente a ArrayList en Java)
# =====================================
numeros = [1, 2, 3, 4, 5]
print(numeros[0])  # primer elemento
numeros.append(6)  # añadir
print(numeros)

for n in numeros:
    print("Número:", n)


# =====================================
# CLASES Y OBJETOS
# =====================================
class Persona:
    def __init__(self, nombre, edad):  # Constructor
        self.nombre = nombre
        self.edad = edad

    def saludar(self):
        print(f"Soy {self.nombre} y tengo {self.edad} años.")


p1 = Persona("Javi", 22)
p1.saludar()
