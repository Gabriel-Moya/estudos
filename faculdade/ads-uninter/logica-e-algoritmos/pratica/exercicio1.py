import os
def cls():
    os.system('clear')

nome = input('Digite o nome do lutador: ')
peso = float(input('Digite o peso (em kg): '))

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

print('\nNome fornecido: {}\nPeso fornecido: {}'.format(nome, peso))
print('O lutador {} pesa {}kg e se enquadra na categoria {}'.format(nome, peso, categoria))