def soma (*num):
    soma = 0
    print('Tupla: {}'.format(num))

    for i in num:
        soma += i
    return soma

print('Resultado: {}\n'.format(soma(1,2)))
print('Resultado: {}\n'.format(soma(1,2,3,4,5,6,7,8,9)))