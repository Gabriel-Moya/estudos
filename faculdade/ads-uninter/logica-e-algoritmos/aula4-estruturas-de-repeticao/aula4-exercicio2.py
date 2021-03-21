# Escreva um algoritmo que leia um valor e que imprima a quantidade de cédulas necessárias para apgar esse mesmo valor. Vamos trabalhar apenas com valores inteiros e com cédulas de R$ 100, R$ 50, R$ 20, R$ 10, R$ 5 e R$ 1

valor = int(input('Digite o valor em R$: '))

while True:
    if valor >= 100:
        cedulas100 = valor // 100
        valor -= cedulas100*100
        print('Cédulas de 100: {}'.format(cedulas100))
        if not valor:
            break

    if valor >= 50:
        cedulas50 = valor // 50
        valor -= cedulas50*50
        print('Cédulas de 50: {}'.format(cedulas50))
        if not valor:
            break

    if valor >= 20:
        cedulas20 = valor // 20
        valor -= cedulas20*20
        print('Cédulas de 20: {}'.format(cedulas20))
        if not valor:
            break

    if valor >= 10:
        cedulas10 = valor // 10
        valor -= cedulas10*10
        print('Cédulas de 10: {}'.format(cedulas10))
        if not valor:
            break

    if valor >= 5:
        cedulas5 = valor // 5
        valor -= cedulas5*5
        print('Cédulas de 5: {}'.format(cedulas5))
        if not valor:
            break

    if valor:
        cedulas1 = valor
        print('Cédulas de 1: {}'.format(cedulas1))
        break