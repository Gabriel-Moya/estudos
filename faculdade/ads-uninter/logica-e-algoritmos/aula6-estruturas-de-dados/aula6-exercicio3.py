# Crie um jogo de pedra, papel ou tesoura (jokenpo). Você deverá jogar contra o computador. Você irá escolher sempre uma das opções: 1 - Pedra, 2 - Papel, 3 - Tesoura
# O computador sempre irá sortear um número de 1 até 3 para jogar.
# Armazene todos os resultados em uma lista e no final apresente o vencedor
# Encerre o programa ao digitar zero.

import random

def validaInt(pergunta, min, max):
    x = int(input(pergunta))
    while ((x < min) or (x > max)):
        x = int(input(pergunta))

    return x

def vencedor(jogador, maquina):
    global empate, vitorias_jogador, vitorias_maquina
    if (jogador == maquina):
        empate += 1
    elif (jogador == 1 and maquina == 2):
        vitorias_maquina += 1
    elif (jogador == 1 and maquina == 3):
        vitorias_jogador += 1
    elif (jogador == 2 and maquina == 1):
        vitorias_jogador += 1
    elif (jogador == 2 and maquina == 3):
        vitorias_maquina += 1
    elif (jogador == 3 and maquina == 1):
        vitorias_maquina += 1
    elif (jogador == 3 and maquina == 2):
        vitorias_jogador += 1
    
    resultados = [vitorias_jogador, vitorias_maquina, empate]
    return resultados

resultados = []
jogadas = []
empate = 0
vitorias_jogador = 0
vitorias_maquina = 0

print('JOKENPO\n1 - Pedra\n2 - Papel\n3 - Tesoura\n0 - Sair\n')

while True:
    jogador = validaInt('Escolha sua jogada:\n', 0, 3)
    if not jogador:
        break
    
    maquina = random.randint(1, 3)
    jogadas.append([jogador, maquina])
    resultados = vencedor(jogador, maquina)

    print(resultados)

print('Número de vitórias do jogador 1: {}'.format(resultados[0]))
print('Número de vitórias do jogador 1: {}'.format(resultados[1]))
print('Número de empates: {}'.format(resultados[2]))