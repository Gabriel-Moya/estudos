# Faça um algoritmo que receba três valores, representando os lados de um triângulo fornecidos pelo usuário. Verifique se os valores formam um triângulo e classifique como: Equilátero (Três lados iguais), Isóceles (Dois lados iguais), Escaleno (Três lados diferentes)

a = float(input('Insira o valor do primeiro lado: '))
b = float(input('Insira o valor do segundo lado: '))
c = float(input('Insira o valor do terceiro lado: '))

if (a == b and b == c):
    print('Triângulo equilátero')
elif ((a == b and b != c) or (b == c and c != a) or (a == c and b != c)):
    print('Triângulo isósceles')
elif (a != b and b != c):
    print('Triângulo escaleno')