# Imagine uma situação na qual você deve realizar o cadastro de uma lista de compras em um sistema. Cada produto comprado deverá ser registrado com seu nome, quantidade e valor unitário

mercado = []

for i in range (3):
    nome = input('Digite o nome do item: ')
    qtd = int(input('Digite a quantidade: '))
    valor = float(input('Digite o valor: '))
    mercado.append([nome, qtd, valor])

print(mercado)

soma = 0

print('\nLista de compras')
print('-'*20)
print('Item | Quantidade | Valor unitário | Total do item')

for i in mercado:
    print('{} | {} | {} | {}'.format(i[0], i[1], i[2], i[1] * i[2]))
    soma += i[1]*i[2]

print('-'*20)
print('Total a ser pago: {}'.format(soma))