soma = 0
cont = 1

while  (cont <= 5):
    x = float(input("Digite a {}ª nota: ".format(cont)))
    soma += x
    cont += 1

media = soma / 5
print('Média final: {}'.format(media))