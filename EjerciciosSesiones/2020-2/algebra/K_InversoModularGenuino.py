""" Programa para encontrar el inverso modular multiplicativo...aquel número x
que hace que a*x mod c = 1 mod c.
Complejidad: O(c)
Material asociado:
https://drive.google.com/open?id=1BArQTdM3KfjnUav2eAcSAaP5oIotAiVG__VWL_lw00s
"""

def encontrarInversoModular(a, c):
    for i in range(c):
        if(((a%c) * (i%c)) % c == 1):
            return i
    return -1

a = int(input("A: "))
c = int(input("C: "))

b = encontrarInversoModular(a, c)
if(b != -1):
    print("El inverso modular " + str(a) + " mod " + str(c) + " es: " + str(b))
else:
    print("No hay inverso modular para: " + str(a) + " mod " + str(c))
