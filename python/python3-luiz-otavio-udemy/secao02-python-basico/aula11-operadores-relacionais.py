nome = input('Qual o seu nome? ')
idade = int(input('Insira a sua idade: '))

# Limite para pegar empréstimo
idade_limite = 18

if idade >= idade_limite:
    print(f'{nome} pode pegar o empréstimo')
else:
    print(f'{nome} NÃO pode pegar empréstimo')