from math import *
from sys import stdin, stdout
# https://omegaup.com/arena/problem/Compuertas-Logicas/#problems


def NOT(x):
    return not(x)

def AND(x, y):
    return x and y

def OR(x, y):
    return x or y

def NAND(x, y):
    return (not(x and y))

def NOR(x, y):
    return (not(x or y))

def XOR(x, y):
    if(x and not(y)):
        return True
    elif(not(x) and y):
        return True
    else:
        return False

def XNOR(x, y):
    if(x and not(y)):
        return False
    elif(not(x) and y):
        return False
    else:
        return True


def f_creator():
    expr = stdin.readline()
    TRUE = True
    true = True
    false = False
    FALSE = False
    try:
        y = eval(expr)
    except Exception as e:
        y = False
    if(y):
        print("TRUE")
    else:
        print("FALSE")

if __name__ == '__main__':
    f_creator()
