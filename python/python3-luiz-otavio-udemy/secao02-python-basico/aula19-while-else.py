contador = 1
acumulador = 1

while contador <= 10:
    print(f'Contador = {contador} Acumulador = {acumulador}')

    if contador > 5:
        break

    acumulador = acumulador + contador
    contador += 1
# Só é executado quando o while der falso, no caso do break ele é interrompido antes de executar
else:
    print('Else está aqui')

print('Isso será executado')