# Split transforma uma string em uma lista
string = 'O Brasil é o país do futebol, o Brasil é penta'
lista1 = string.split(' ')
lista2 = string.split(',')

print(lista1)
print(lista2)

# Join realiza a junção de duas ou mais strings
string2 = ' '.join(lista1)
print(string2)
string2 = ','.join(lista2)
print(string2)
print()

# Enumerate faz uma enumeração de elementos da lista (Enumerate é iterável)
for indice, valor in enumerate(lista1):
    print(indice, valor)
