lista = ['Gabriel', 'João', 'Maria']

for valor in lista:
    if valor.lower().startswith('j'):
        print('Existe uma palavra com J.')
        break
else:
    print('Existe uma palavra que começa com J.')