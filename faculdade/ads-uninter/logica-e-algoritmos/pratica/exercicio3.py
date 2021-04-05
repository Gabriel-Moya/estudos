import os
import platform

def cls():
    if platform.system() == 'Windows':
        os.system('cls')
    elif platform.system() == 'Linux':
        os.system('clear')

alunos = {
    'nome':[],
    'notas':[],
    'media':[],
    'situacao':[]
}

qtd_alunos = int(input('Digite a quantidade de alunos que irá inserir: '))

for aluno in range (qtd_alunos):
    cls()
    nome_aluno = input('Digite o nome do aluno: ')

    nota1 = int(input('Insira a nota 1: '))
    nota2 = int(input('Insira a nota 2: '))
    nota3 = int(input('Insira a nota 3: '))
    nota4 = int(input('Insira a nota 4: '))
    media = (nota1 + nota2 + nota3 + nota4)/4

    alunos['nome'].append(nome_aluno)
    alunos['notas'].append([nota1, nota2, nota3, nota4])
    alunos['media'].append(media)

    if (media >= 7):
        alunos['situacao'].append('Aprovado')
    elif (media < 7):
        alunos['situacao'].append('Reprovado')

cls()

print('Nomes | Notas | Média | Situação')
print('- ' * 10)

for individual in range (qtd_alunos):
    nota = " ".join([str(_) for _ in alunos['notas'][individual]])
    print(alunos['nome'][individual], '|', nota, '|', alunos['media'][individual], '|', alunos['situacao'][individual])
