# Criar variáveis para nome (str), idade (int),
# Altura (float) e peso (float) de uma pessoa
# Criar variável com o ano atual (int)
# Obter o ano de nascimento da pessoa (baseado na idade e no ano atual)
# Obter o IMC da pessoa com 2 casas decimais (no peso e na altura)
# Exibir um texto com todos os valores na tela, usando F_Strings (Com as chaves)

nome = 'Gabriel'        # String
idade = 25              # int
altura = 1.78           # float
peso = 80
ano_atual = 2021
ano_nascimento = ano_atual - idade
imc = peso / (altura ** 2)

print(f'{nome} tem {idade} anos de idade, {altura:.2f} de altura e pesa {peso}Kg\nO seu IMC é {imc:.2f}\n{nome} nasceu em {ano_nascimento}')