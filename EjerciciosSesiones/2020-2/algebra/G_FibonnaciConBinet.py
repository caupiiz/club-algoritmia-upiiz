# Calcular el n-ésimo elemento de la suceción de Fibonacci
# Complejidad en tiempo: O(1)
import math

def formulaDeBinet(n):
    res = (((1 + math.sqrt(5)) / 2) ** n) / (math.sqrt(5))
    return round(res)

n = int(input("Escribe n: "))

fn = formulaDeBinet(n)

print(fn)
