# FALTA TERMINAR ESSA COISA AQUI
# ESTÁ QUASE PRONTO

# FALTA TERMINAR ESSA COISA AQUI
# ESTÁ QUASE PRONTO

# FALTA TERMINAR ESSA COISA AQUI
# ESTÁ QUASE PRONTO

# FALTA TERMINAR ESSA COISA AQUI
# ESTÁ QUASE PRONTO

# FALTA TERMINAR ESSA COISA AQUI
# ESTÁ QUASE PRONTO

# FALTA TERMINAR ESSA COISA AQUI
# ESTÁ QUASE PRONTO

# FALTA TERMINAR ESSA COISA AQUI
# ESTÁ QUASE PRONTO

# FALTA TERMINAR ESSA COISA AQUI
# ESTÁ QUASE PRONTO

# FALTA TERMINAR ESSA COISA AQUI
# ESTÁ QUASE PRONTO

# FALTA TERMINAR ESSA COISA AQUI
# ESTÁ QUASE PRONTO

codigo = int(input('Digite um número inteiro de 5 dígitos (Entre 10000 e 30000): '))

def verificaInput(codigo):
    entrada = codigo
    if((entrada < 10000 or entrada > 30000) and (entrada // 1 != entrada)):
        print('Por favor, tente novamente com um número válido, não sabe ler não? Seu idiota')
    else:
        print('Prossiga')

def digitoVerificador(codigo):
    digito1 = codigo//10000
    digito2 = (codigo//1000)%10
    digito3 = (codigo//100)%10
    digito4 = (codigo//10)%10
    digito5 = (codigo//1)%10

    digito1 *= 2
    digito2 *= 3
    digito3 *= 4
    digito4 *= 5
    digito5 *= 6

    verificador = (digito1 + digito2 + digito3 + digito4 + digito5) % 7

    return verificador

verificaInput(codigo)

print('{}-{}'.format(codigo,digitoVerificador(codigo)))