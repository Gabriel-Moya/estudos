# Dada uma lista contendo as notas de alunos em uma disciplina, escreva uma expressão para:
#   Notas = [9, 7, 7, 10, 3, 9, 6, 6, 2]
# A) Encontrar quantos alunos tiraram nota 7
# B) Alterar a última nota para 4
# C) Encontrar a maior nota
# D) Ordenar a lista de notas
# E) A média das notas

notas = [9, 7, 7, 10, 3, 9, 6, 6, 2]
print('Notas: ', notas, '\n')

print('A) Encontrar quantos alunos tiraram nota 7')
print(notas.count(7), '\n')

print('B) Alterar a última nota para 4')
notas[-1] = 4
print(notas, '\n')

print('C) Encontrar a maior nota')
print(max(notas), '\n')

print('D) Ordenar a lista de notas')
print(sorted(notas), '\n')

print('E) A média das notas')
soma = 0
for i in range(len(notas)):
    soma += notas[i]
media = soma/(len(notas))
# Duas maneiras de reduzir a casa decimal
print('Média: {:.2f}'.format(media))
print('Média:', round(media, 2))