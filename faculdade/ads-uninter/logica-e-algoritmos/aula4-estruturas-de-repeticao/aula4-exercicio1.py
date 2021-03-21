# Escreva um algoritmo que leia dois valores numéricos e que pergunte ao usuário qual operação ele deseja realizar: adição (+), subtração (-), multiplicação (*) ou divisão (/) E SAIR. Exiba na tela o resultado da operação desejada.
# Repita até que a opção saída seja escolhida.

# É um aprimoramento do exercício da aula anterior

print('CALCULADORA')
print('+ Adição')
print('- Subtração')
print('* Multiplicação')
print('/ Divisão')
print('Pressione "s" para sair')

op = input('Qual operação deseja fazer? ')

while (op != 's'):
    if op == '+' or '-' or '*' or '/':
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
        print('Operação inválida')
        
    op = input('Qual operação deseja fazer? ')