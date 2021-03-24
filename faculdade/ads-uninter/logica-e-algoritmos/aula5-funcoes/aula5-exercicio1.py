# Escreva uma função que calcule o fatorial de um número recebido como parâmetro e retorne seu resultado
# Faça uma validação dos dados por meio de uma outra função, permitindo que somente valores positivos sejam aceitos
# Crie o help da sua função

def calculaFatorial(num):
    """
    Calcula fatorial de um número
    :param num: Recebe como parâmetro o número a ser calculado o fatorial
    :return: Retorna o resultado do fatorial
    """
    fatorial = 1
    if num == 0:
        return fatorial

    for i in range (1, num+1):
        fatorial *= i

    return fatorial

def validaInt(pergunta, min, max):
    x = int(input(pergunta))
    while ((x < min) or (x > max)):
        x = int(input(pergunta))
    return x

x = validaInt('Digite um número para calcular o fatorial: ', 0, 99999)
print('{}! = {}'.format(x, calculaFatorial(x)))
# help(calculaFatorial)