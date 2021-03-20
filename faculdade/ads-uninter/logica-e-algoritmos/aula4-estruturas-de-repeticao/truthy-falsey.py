# ------------------------------------------------------ #
# Falsey/False | Número zero (int ou float) e string vazia
# Truthy/True | Qualquer outro dado
# ------------------------------------------------------ #

nome = ''
while not nome:
    nome = input('Digite seu nome: ')

valor = int(input('Digite um número qualquer: '))
if valor:
    print('Você digitou um valor diferente de zero.')
else:
    print('Você digitou zero.')