# Escreva um programa que calcule o preço a pagar pelo fornecimento de energia elétrica. Pergunte a quantidade de kWh consumida e o tipo de instalação: R para residências, I para indústrias e C para comércios.

# Utilize a tabela a seguir
# Residencial até 500 R$ 0,40, acima de 500 R$ 0,65
# Comercial até 1000 R$ 0,55, acima de 1000 R$ 0,60
# Industrial até 5000 R$ 0,55 acima de 5000 R$ 0,60

kwh = float(input('Quantidade de kWh? '))
tipo = input('Qual o tipo de instalação? (R, C ou I) ')

if (tipo == 'R'):
    if kwh <= 500:
        preco = 0.4
    else:
        preco = 0.65

elif (tipo == 'C'):
    if kwh <= 1000:
        preco = 0.55
    else:
        preco = 0.60

elif (tipo == 'I'):
    if kwh <= 5000:
        preco = 0.55
    else:
        preco = 0.60

else:
    print('Instalação inválida')

print('Total a pagar: {}'.format(kwh * preco))