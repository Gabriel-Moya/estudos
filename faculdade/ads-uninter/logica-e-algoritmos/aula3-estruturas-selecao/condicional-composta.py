###########################################################
# Traduza as afirmações a seguir para condicionais
#
# A) Se ano é divisível por 4, escreva: "Pode ser um ano bissexto". Caso contrário, escreva: "Definitivamente não é um ano bissexto".
# B) Se ambas as variáveis booleanas cima e baixo forem True, escreva: "Decida-se", caso contrário, escreva: "Vocês escolheu um caminho".
###########################################################

import os
def cls():
    os.system('clear')

print('A) Se ano é divisível por 4, escreva: "Pode ser um ano bissexto". Caso contrário, escreva: "Definitivamente não é um ano bissexto".\n')
print('B) Se ambas as variáveis booleanas cima e baixo forem True, escreva: "Decida-se", caso contrário, escreva: "Você escolheu um caminho".\n')
escolha = input('Escolha o exercício (Com as letras): ')

cls()

if escolha == 'A':
    ano = int(input('Digite um ano qualquer: '))
    if ano % 4 == 0:
        print('Pode ser um ano bissexto.')
    else:
        print('Definitivamente não é um ano bissexto.')
# elif escolha == 'B':
#     cima = bool(int(input('Cima - 1 para True ou 0 para False: ')))
#     baixo = bool(int(input('Baixo - 1 para True ou 0 para False: ')))
#     print(type(cima), type(baixo))
#     print(cima,baixo)
#     if ((cima == True) and (baixo == True)):
#         print('Decida-se')
#     elif (cima != baixo):
#         print('Você escolheu um caminho')
#     elif (cima == False and baixo == False):
#         print('Não escolheu nenhum caminho')
elif escolha == 'B':
    cima = eval(input('Cima - escolha com "True" or "False": '))
    baixo = eval(input('Baixo - escolha com "True" or "False": '))
    print(type(cima), type(baixo))
    print(cima,baixo)
    if ((cima == True) and (baixo == True)):
        print('Decida-se')
    elif (cima != baixo):
        print('Você escolheu um caminho')
    elif (cima == False and baixo == False):
        print('Não escolheu nenhum caminho')