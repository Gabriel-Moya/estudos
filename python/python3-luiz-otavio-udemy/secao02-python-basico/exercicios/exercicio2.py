# Bom dia 0 - 11, Boa tarde 12-17 e Boa noite 18-23.

horario = input('Qual o horário atual? ')

if horario.isnumeric():
    horario = int(horario)
    if horario <= 11:
        print('Bom dia!')
    elif horario <= 17:
        print('Boa tarde!')
    elif horario <= 23:
        print('Boa noite!')
    elif horario < 0 or horario > 23:
        print('Por favor, insira um horário válido')
else:
    print('Por favor, insira um horário válido')