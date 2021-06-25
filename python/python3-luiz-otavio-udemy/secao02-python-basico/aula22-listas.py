""" l1 = [1, 2, 3]
l2 = [4, 5, 6]
l3 = l1 + l2
l4 = []
l5 = list(range(0, 100, 8))

l4.extend(l1 + l2)

print('Lista 1:', l1)
print('Lista 2:', l2)
print('Lista 3:', l3)
print('Lista 4:', l4)
print('Lista 5:', l5)

l4.append('a')
print(l4)

l4.insert(0, 'b')
print(l4)

l4.pop(-1)
print(l4)

l4.pop(0)
print(l4)

del(l4[3:5])
print(l4) """

palavraSecreta = 'perfume'
letrasDigitadas = []
chances = 3

while True:
    if chances <= 0:
        print('Você perdeu!!!')
        break

    letra = input('Digite uma letra: ')

    if len(letra) > 1:
        print('Opa isso não vale, digite somente uma letra.')
        continue

    letrasDigitadas.append(letra)

    if letra in palavraSecreta:
        print(f'Aeee, a letra {letra} existe na palavra secreta.')
    else:
        print(f'Poxa... a letra {letra} não existe na palavra secreta.')
        letrasDigitadas.pop()

    secretoTemp = ''
    for letraSecreta in palavraSecreta:
        if letraSecreta in letrasDigitadas:
            secretoTemp += letraSecreta
        else:
            secretoTemp += '*'

    if secretoTemp == palavraSecreta:
        print(f'UHUUU VOCÊ GANHOU!!! A palavra era {secretoTemp}.')
        break
    else:
        print(f'\nA palavra secreta está assim ==> {secretoTemp}')

    if letra not in palavraSecreta:
        chances -= 1

    print(f'Você ainda tem {chances} chances.')
    print()