nome = 'Gabriel'        # String
idade = 25              # int
altura = 1.78           # float
peso = 80
e_maior = idade > 18    # bool
imc = peso / (altura ** 2)

print(nome, 'tem', idade, 'anos de idade e seu IMC é', imc)

print(f'{nome} tem {idade} anos de idade e seu IMC é {imc:.2f}')
print('{} tem {} anos de idade e seu IMC é {:.2f}'.format(nome, idade, imc))