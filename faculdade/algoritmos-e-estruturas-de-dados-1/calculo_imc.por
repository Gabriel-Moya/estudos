programa
{
	inclua biblioteca Tipos
	
	funcao inicio()
	{
		//variáveis
		real h, kg, imc

		//captura dos dados
		escreva("Insira sua altura: ")
		leia(h)
		
		escreva("Insira seu peso atual: ")
		leia(kg)

		imc=kg/(h*h)

		//exibição do cálculo
		escreva("\nSeu IMC atual é: ", imc)

		//Diagnostico de peso, usando condicional
		se (imc <= 18.5)
			{
				escreva("\nSeu peso é considerado abaixo do normal")
			}
			senao se (imc <= 24.9)
			{
				escreva("\nSeu peso é considerado normal")
			}
			senao se (imc <= 29.9)
			{
				escreva("\nSeu peso é considerado sobrepeso")
			}
			senao se (imc <= 34.9)
			{
				escreva("\nSeu peso é considerado obesidade classe I")
			}
			senao se (imc <= 39.9)
			{
				escreva("\nSeu peso é considerado obesidade classe II")
			}
			senao se (imc > 40)
			{
				escreva("\nSeu peso é considerado obesidade classe III")
			}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 875; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */