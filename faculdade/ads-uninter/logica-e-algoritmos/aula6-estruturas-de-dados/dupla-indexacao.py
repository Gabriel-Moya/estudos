# Aproveitando o código já feito em "listas.py"

mochila = ['Machado', 'Camisa', 'Bacon', 'Abacate']

# Primeiro índice faz referência a posição da lista
# Segundo índice faz referência ao caractere da string que estava na posição da lista
print(mochila[0][0])
print(mochila[2][1])

# Imprimindo todas as palavras através de matriz
for i in mochila:
    for j in i:
        print(j, end='')
    print(', ', end='')