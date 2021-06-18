# Formatando valores com modificadores

# :s - Textos (strings)
# :d - Inteiros (int)
# :f - Números de ponto flutuante (float)
# :.(NÚMERO)f - Quantidade de casas decimais (float) :.2f
# :(CARACTERE)(POSIÇÃO: > ou < ou ^)(QUANTIDADE)(TIPO - s, d ou f)

# > - Esquerda
# < - Direita
# ^ - Centro

nome = 'Gabriel Moya'
print("O nome irá ficar ao centro enquanto preenche 20 posições com a '#'")
print(f'{nome:#^20}\n')

num1 = 2
print('O número irá ficar com 2 casas, mas com a primeira posição vazia')
print(f'{num1:2d}\n')

num2 = 2
print('O número irá ficar com 2 casas, mas com a primeira posição preenchida com 0')
print(f'{num2:0>2d}\n')

num3 = 10/3
print('O resultado de 3.3333333333333335 será reduzido para duas casas decimais')
print(f'{num3:.2f}')