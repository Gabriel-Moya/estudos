import os
import platform

def cls():
    if platform.system() == 'Windows':
        os.system('cls')
    elif platform.system() == 'Linux':
        os.system('clear')

select = 1
while select != 0:
    select = int(input('Digite qualquer número para continuar ou 0 para encerrar: '))
    if select == 0:
        print('Finalizando...')
        break
    nome = input('Digite o nome do lutador: ')
    peso = float(input('Digite o peso (em kg): '))

    # Define a categoria do lutador
    if (peso < 65):
        categoria = ('Pena')
    elif (peso >= 65 and peso < 72):
        categoria = ('Leve')
    elif (peso >= 72 and peso < 79):
        categoria = ('Ligeiro')
    elif (peso >= 79 and peso < 86):
        categoria = ('Meio-médio')
    elif (peso >= 86 and peso < 93):
        categoria = ('Médio')
    elif (peso >= 93 and peso < 100):
        categoria = ('Meio-pesado')
    elif (peso >= 100):
        categoria = ('Pesado')

    cls()

    # Exibição dos dados
    print('\nNome fornecido: {}\nPeso fornecido: {}'.format(nome, peso))
    print('O lutador {} pesa {}kg e se enquadra na categoria {}'.format(nome, peso, categoria))