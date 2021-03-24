def validaInt(pergunta, min, max):
    x = int(input(pergunta))
    while ((x < min) or (x > max)):
        x = int(input(pergunta))
    return x


def criaArquivo(nomeArquivo):
    try:
        a = open(nomeArquivo, 'wt+')
        a.close()

    except:
        print('Erro na criação do arquivo')

    else:
        print('Arquivo {} criado com sucesso.\n'.format(nomeArquivo))


def verificaArquivo(nomeArquivo):
    try:
        a = open(nomeArquivo, 'rt')
        a.close()

    except FileNotFoundError:
        return False
        # print('Arquivo não encontrado')

    else:
        return True


def cadastraJogo(nomeArquivo, nomeJogo, nomePlataforma):
    try:
        a = open(nomeArquivo, 'at')

    except:
        print('Erro ao abrir arquivo')

    else:
        a.write('Nome: {}\nPlataforma: {}\n\n'.format(nomeJogo, nomePlataforma))
    
    finally:
        a.close()


def listaArquivo(nomeArquivo):
    try:
        a = open(nomeArquivo, 'rt')

    except:
        print('Erro ao ler o arquivo')

    else:
        print(a.read())
    
    finally:
        a.close()


arquivo = 'aula5-exercicio2.txt'


if verificaArquivo(arquivo):
    print('Arquivo localizado')

else:
    print('Arquivo inexistente')
    criaArquivo(arquivo)

while True:
    print('MENU')
    print('1 - Cadastrar novo item')
    print('2 - Listar cadastros')
    print('3 - Sair')

    op = validaInt('Escolha a opção desejada: ', 1, 3)

    if (op == 1):
        print('Cadastrar novo item\n')
        nomeJogo = input('Nome do jogo: ')
        plataforma = input('Plataforma: ')
        cadastraJogo(arquivo, nomeJogo, plataforma)

    elif (op == 2):
        print('Lista de cadastros\n')
        listaArquivo(arquivo)

    elif (op ==3):
        print('Encerrando o programa...')
        break