programa
{
	
	funcao inicio()
	{
		inteiro DL, HJ, HD, Min
		
		escreva("Insira a quantidade de dias restantes das férias: ")
		leia (DL)
		escreva ("Insira a quantidade de horas para o jogo: ")
		leia (HJ)
		HD=HJ/DL
		Min=(HJ-HD*DL)*60/DL
		escreva ("\nSera necessario jogar ", HD, " hora e ", Min, " minutos por dia\n" )
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 320; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */