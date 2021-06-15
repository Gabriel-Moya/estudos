usuario = input('Nome de usuário: ')
senha = input('Senha do usuário: ')

usuario_bd = 'gabriel'
senha_bd = '123456'

if usuario_bd == usuario and senha_bd == senha:
    print('Login realizado com sucesso')
else:
    print('Usuário ou senha inválido.')