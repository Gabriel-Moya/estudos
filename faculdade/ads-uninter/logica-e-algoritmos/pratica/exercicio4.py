import os
import platform

def cls():
    if platform.system() == 'Windows':
        os.system('cls')
    elif platform.system() == 'Linux':
        os.system('clear')

def preencheAgenda():
    while True:
        cls()
        nome = input('Digite o nome do seu contato (Deixe em branco para finalizar): ')
        if nome == '':
            break
        else:
            idade = int(input('Digite a idade: '))
            telefone = int(input('Insira o número de telefone: '))
            agenda.append({'nome':nome, 'idade':idade, 'telefone':telefone})
            cls()

agenda = []

preencheAgenda()
agenda.sort(key=lambda x: x['nome'])

print('Nome | Idade | Telefone')
print('- ' * 12)
for i in agenda:
    print(i['nome'], '|', i['idade'], '|', i['telefone'])

adultos = []

for i in agenda:
    if i['idade'] >= 18:
        adultos.append(i)

print('\nNome | Idade | Telefone')
print('- ' * 12)
for i in adultos:
    print(i['nome'], '|', i['idade'], '|', i['telefone'])

adolescentes = []

for i in agenda:
    if i['idade'] < 18:
        adolescentes.append(i)

print('\nNome | Idade | Telefone')
print('- ' * 12)
for i in adolescentes:
    print(i['nome'], '|', i['idade'], '|', i['telefone'])