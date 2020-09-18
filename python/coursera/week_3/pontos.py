import math

num1 = float(input("Digite um numero: "))
num2 = float(input("Digite um numero: "))
num3 = float(input("Digite um numero: "))
num4 = float(input("Digite um numero: "))

dist = math.sqrt((num1 - num3) ** 2 + (num2 - num4) ** 2)

if dist >= 10:
    print("longe")
else:
    print("perto")