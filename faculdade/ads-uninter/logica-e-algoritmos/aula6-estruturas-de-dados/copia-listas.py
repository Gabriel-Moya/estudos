x = [5, 7, 9, 11]
# Ao atribuir somente com o "=", o python cria algo como se fosse um ponteiro para x
y = x
print(x)
print(y)

y[0] = 2
print(x)
print(y)

# Para copiar o conteúdo para outra variável usa-se
y = x[:]
y[1] = 8
print(x)
print(y)