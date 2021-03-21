# Um cinema cobra preços diferentes para os ingressos de acordo com a idade de uma pessoa. Se a pessoa tiver menos de 3 anos de idade, o ingresso será gratuito, se tiver entre 3 e 12 anos, custará R$ 15, se tiver mais de 12 anos, custará R$ 30.

# Escreva um laço em que você pergunte a idade aos usuários e, então, informe-lhes o preço do ingresso do cinema;
# Encerre o laço usando um break quando o usuário digitar sair;
# Após encerrar o laço, apresente na tela o total de pessoas que compraram ingressos, o total de dinheiro arrecadado e a média.

somaIdade = 0
somaPessoas = 0
somaArrecadacao = 0

while True:
    idade = input('Digite sua idade: ')
    if idade == 'sair':
        break
    idade = int(idade)

    somaIdade += idade
    somaPessoas += 1
    if idade <= 3:
        ingresso = 0
    elif idade > 3 and idade <= 12:
        ingresso = 15
    elif idade > 12:
        ingresso = 30
    
    somaArrecadacao += ingresso

print('Total de pessoas: {}'.format(somaPessoas))
print('Total arrecadado: {}'.format(somaArrecadacao))
print('Média arrecadada: {}'.format(somaArrecadacao/somaPessoas))