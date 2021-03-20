# Imprimir somente os pares

inicial = int(input('Qual valor deseja iniciar a contagem? '))
final = int(input('Qual valor deseja encerrar a contagem? '))
x = inicial

while (x <= final):
    if(x % 2 == 0):
        print(x)
    x += 1