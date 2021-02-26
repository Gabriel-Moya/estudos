programa
{
	inclua biblioteca Tipos
	//Receba o salário fixo de umfuncionário mais 4% de comissão sobre suas vendas, no final mostre a comissão e o salário com a comissão
	
	funcao inicio()
	{
		real salario, vendas, comissao
		
		escreva("Insira o salário do funcionário ")
		leia(salario)

		escreva("Insira o valor das vendas do funcionario ")
		leia(vendas)

		comissao = vendas*.04

		escreva("A comissão é de: ", comissao)
		escreva("\nO salário comissionado será de: ", salario+comissao)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 484; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */