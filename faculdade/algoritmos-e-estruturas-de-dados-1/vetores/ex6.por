programa
{
	
	funcao inicio()
	{
		inteiro i,x[5],y[5],z[10]
		para (i=0;i<5;i++){
			escreva("Insira o valor do primeiro vetor. ")
			leia(x[i])
			escreva("Insira o valor do segundo vetor. ")
			leia(y[i])
		}

		para(i=0;i<10;i++){
			se (i<5)
				z[i]=x[i]
			senao
				z[i]=y[i-5]
			escreva(" ", z[i])
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 244; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */