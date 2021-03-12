# Escreva um algoritmo que leia dois valores numéricos e que pergunte ao usuário qual operação ele deseja realizar: adição (+), subtração (-), multiplicação (*) ou divisão (/). Exiba na tela o resultado da operação desejada.

print('CALCULADORA')
print('+ Adição')
print('- Subtração')
print('* Multiplicação')
print('/ Divisão')
print('Pressione outra tecla para sair')

op = input('Qual operação deseja fazer? ')
if op != ('+' or '-' or '*' or '/'):
    print('Finalizando...')
else:
    x = float(input('Digite o primeiro valor: '))
    y = float(input('Digite o segundo valor: '))

    if (op == '+'):
        print('{} + {} = {}'.format(x,y,x+y))
    elif (op == '-'):
        print('{} - {} = {}'.format(x,y,x-y))
    elif (op == '*'):
        print('{} * {} = {}'.format(x,y,x*y))
    elif (op == '/'):
        print('{} / {} = {}'.format(x,y,x/y))
    else:
        print('Finalizando sua calculadora')