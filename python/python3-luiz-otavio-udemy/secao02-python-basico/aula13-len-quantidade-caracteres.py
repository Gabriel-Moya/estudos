usuario = input('Insira seu usuário: ')
qtd_caracteres = len(usuario)

print(usuario, qtd_caracteres)

if qtd_caracteres < 6:
    print('Digite um usuário com mais de 6 caracteres')
else:
    print('Você foi cadastrado no sistema')

string1 = input('Digite alguma coisa: ')
string2 = input('Digite outra coisa: ')

print(f'A quanditdade total de caracteres digitados foi {len(string1) + len(string2)}')