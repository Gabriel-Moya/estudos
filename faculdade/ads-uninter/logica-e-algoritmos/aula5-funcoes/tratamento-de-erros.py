# Try Except
while True:
    try:
        x = int(input('Por favor digite um número: '))
        break
    except ValueError:
        print('Oops! Número inválido, tente novamente...')

# Try Except finally
def div():
    try:
        num1 = int(input('Digite um número: '))
        num2 = int(input('Digite um número: '))
        res = num1 / num2
    except ZeroDivisionError:
        print('Oops! Erro de divisão por zero.')
    except:
        print('Oops! Algo de errado aconteceu por aqui...')
    else:
        return res
    finally:
        print('Finalmente')

print(div())