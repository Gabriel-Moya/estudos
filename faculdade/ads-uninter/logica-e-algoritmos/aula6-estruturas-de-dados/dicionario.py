game = {
    # 'key':'value'
    'nome':'Super Mario',
    'desenvolvedora':'Nintendo',
    'ano':1990
}

print(game)

# Acessa o conteúdo referente a chave
print(game['nome'])
print(game['desenvolvedora'])
print(game['ano'])

# Retorna somente os valores
print('\n', game.values())

for i in game.values():
    print(i)

# Retorna somente as chaves
print('\n', game.keys())

for i in game.keys():
    print(i)

# Retorna o conjunto key:value
print('\n', game.items())

for i,j in game.items():
    print('{} = {}'.format(i, j))