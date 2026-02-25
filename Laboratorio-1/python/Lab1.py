reservas = []
capacidad = 5

def hay_cupo(reservas, capacidad):
    return len(reservas) < capacidad 


def mostrar_resumen(reservas, capacidad):
    print("\nResumen")
    print(f"Reservas aceptadas: {len(reservas)}/{capacidad}")
    for nombre in reservas:
        print(f"- {nombre}")


while True:
    print(f"\nCupos disponibles: {capacidad - len(reservas)}")
    nombre = input("Ingrese su nombre o 'salir': ")

    if nombre == 'salir':
        break

    if hay_cupo(reservas, capacidad):
        reservas.append(nombre)
        print("Reserva exitosa")
    else:
        print("No hay cupos disponibles")

mostrar_resumen(reservas, capacidad)
