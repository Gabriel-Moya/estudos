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
 * @POSICAO-CURSOR = 307; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {x, 6, 12, 1}-{y, 6, 17, 1}-{z, 6, 22, 1};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */