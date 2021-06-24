x = 0
y = 0

while x < 5:
    if x == 3:
        x += 1
        continue

    print(x)
    x += 1

print('Acabou X!\n')

while y < 5:
    if y == 3:
        y += 1
        break

    print(y)
    y += 1

print('Acabou Y!')

while True:
    print()
    num1 = input('Digite um número: ')
    num2 = input('Digite outro número: ')
    operador = input('Digite um operador (+, -, / ou *): ')

    if not num1.isnumeric() or not num2.isnumeric():
        print('Você precisa digitar um número válido.')
        continue

    num1 = int(num1)
    num2 = int(num2)

    if operador == '+':
        print(num1 + num2)
        sair = input('Deseja sair? [s]im [n]ão: ')
    elif operador == '-':
        print(num1 - num2)
        sair = input('Deseja sair? [s]im [n]ão: ')
    elif operador == '/':
        print(num1 / num2)
        sair = input('Deseja sair? [s]im [n]ão: ')
    elif operador == '*':
        print(num1 * num2)
        sair = input('Deseja sair? [s]im [n]ão: ')
    else:
        print('Operador inválido')

    if sair == 's':
        break