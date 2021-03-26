mochila = ('Machado', 'Camisa', 'Bacon', 'Abacate')
print('Tupla: ', mochila)

mochila = ['Machado', 'Camisa', 'Bacon', 'Abacate']
print('Lista: ', mochila)

mochila[2] = 'Laranja'
print('Lista: ', mochila)

# Inserindo item ao final da lista
mochila.append('Ovos')
print('Lista: ', mochila)

# Inserindo item em posição específica da lista
mochila.insert(1, 'Canivete')
print('Lista: ', mochila)

# Removendo item da lista
del mochila[1]
print('Lista: ', mochila)

mochila.remove('Ovos')
print('Lista: ', mochila)