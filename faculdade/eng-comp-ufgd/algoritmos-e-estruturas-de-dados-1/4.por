programa {
	funcao inicio() {
		inteiro n, x
		real H=0.0
		
		escreva("Insira um n�mero inteiro: ")
		leia(n)
		
		para (x=1; x<=n; x++)
		H=(1.0/x)+H
		
		escreva("\n", H)
	}
}
