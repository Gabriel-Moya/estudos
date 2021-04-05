codigo = int(input('Digite um número inteiro de 5 dígitos (Entre 10000 e 30000): '))

def verificaInput(codigo):
    entrada = codigo
    if((entrada < 10000 or entrada > 30000) and (entrada // 1 != entrada)):
        print('Por favor, tente novamente com um número válido.')
    else:
        print('Prossiga')

def digitoVerificador(codigo):

    # Fatiamento do número para separar cada dígito
    digito1 = codigo//10000
    digito2 = (codigo//1000)%10
    digito3 = (codigo//100)%10
    digito4 = (codigo//10)%10
    digito5 = (codigo//1)%10

    # Cálculo dos pesos
    digito1 *= 2
    digito2 *= 3
    digito3 *= 4
    digito4 *= 5
    digito5 *= 6

    # Cálculo dígito verificador
    verificador = (digito1 + digito2 + digito3 + digito4 + digito5) % 7

    return verificador

verificaInput(codigo)

# Exibição do resultado
print('{}-{}'.format(codigo,digitoVerificador(codigo)))