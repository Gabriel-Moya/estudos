numero = input('Digite um número inteiro: ')

if numero.isnumeric():
    numero = int(numero)
    if numero % 2 == 0:
        print(f'{numero} é um número par.')
    else:
        print(f'{numero} é um número ímpar')
else:
    print(f'{numero} não é um número inteiro')