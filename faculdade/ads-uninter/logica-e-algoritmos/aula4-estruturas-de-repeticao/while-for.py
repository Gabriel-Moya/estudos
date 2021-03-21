# Realize a sequência de print com for e while
# A) Inteiros de 3 até 12, com 12 incluso
# B) Inteiros de 0 até 9, excluindo 9, com passo de 2

print('A) Inteiros de 3 até 12, com 12 incluso')
x = 3
while (x <= 12):
    print(x)
    x += 1

print('\nB) Inteiros de 0 até 9, excluindo 9, com passo de 2')
for i in range (0, 9, 2):
    print(i)