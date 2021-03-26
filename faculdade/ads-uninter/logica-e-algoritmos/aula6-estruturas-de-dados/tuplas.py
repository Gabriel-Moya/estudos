mochila = ('Machado', 'Camisa', 'Bacon', 'Abacate')
print(mochila)

print('\nAcessando por indices')
print(mochila[0])
print(mochila[2])
print(mochila[0:2])
print(mochila[2:])
print(mochila[-1])

print('\nLaco para acesso')
for i in mochila:
    print('{}'.format(i))

upgrade = ('Queijo', 'Canivete')
mochila_grande = mochila + upgrade

print('\nConcatenando tuplas')
print(mochila)
print(upgrade)
print(mochila_grande)