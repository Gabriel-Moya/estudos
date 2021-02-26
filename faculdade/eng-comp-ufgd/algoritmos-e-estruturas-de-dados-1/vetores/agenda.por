programa
{
	
	funcao inicio()
	{
		inteiro op=0, i=0, j=0, x
		cadeia nome[3], num[3], alt, excluir, busca


		enquanto(op!=6 e i<3)
		{
			escreva("--------Escolha uma opção--------")
			escreva("\n1 - Incluir um novo contato")
			escreva("\n2 - Alterar um contato existente")
			escreva("\n3 - Excluir um contato")
			escreva("\n4 - Consulta por nome")
			escreva("\n5 - Ver lista completa")
			escreva("\n6 - sair\n")

			leia(op)

			se(op==1)
			{
				limpa()
				escreva("Digite o nome do contato: ")
				leia(nome[i])
				escreva("\nDigite o número do contato: ")
				leia(num[i])
				i++
			}
			se(op==2)
			{
				limpa()
				escreva("Alterar nome digite 1\nAlterar número digite 2")
				leia(x)
				se(x==1){
					escreva("Digite...\n")
					leia(alt)
					para(j=0;j<=i;j++){
						se(alt==nome[j]){
							escreva("Digite o novo nome: ")
							leia(nome[j])
						}
						
					}
				}
				senao
				{
					escreva("Digite...\n")
					leia(alt)
					para(j=0;j<=i;j++){
						se(alt==nome[j]){
							escreva("Digite o novo numero: ")
							leia(num[j])
						}
						
					}
				}
			}
			se(op==3)
			{
				escreva("Digite o nome do contato que deseja excluir\n")
				leia(excluir)
				para(j=0;j<i;j++){
					se(excluir==nome[j])
						{
							enquanto(j<i){
								nome[j]=nome[j+1]
								num[j]=num[j+1]
								j++
							}
							i--
						}
				}
			}
			se(op==4)
			{
				escreva("Digite o nome a ser buscado: ")
				leia(busca)
				para(j=0;j<i;j++)
					{
						se(busca==nome[j])
						{
							escreva(nome[j], " : ", num[j], "\n")
						}
					}
			}
			se(op==5)
			{
				para(j=0;j<i;j++)
					escreva("\nNome: ", nome[j], "\nNúmero: ", num[j], "\n")
			}
		
		}

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1697; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {nome, 7, 9, 4}-{num, 7, 18, 3};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */