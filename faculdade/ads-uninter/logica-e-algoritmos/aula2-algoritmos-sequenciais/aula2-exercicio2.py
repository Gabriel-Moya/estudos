km = float(input('Digite a quantidade de km percorridos: '))
dias = int(input('Digite a quantidade de dias que o carro foi alugado: '))

total = ((60*dias)+(0.15*km))

print('Total de km percorridos: {}\nTotal de dias alugado: {}\nTotal a pagar: R$ {}'.format(km,dias,total))