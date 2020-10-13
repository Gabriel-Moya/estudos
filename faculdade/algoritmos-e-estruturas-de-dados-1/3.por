programa {
	funcao inicio() {
		inteiro n, x, y=1
		
		escreva("Insira um número inteiro: ")
		leia(n)
		
		para (x=1; x<=n; x++)
		y=y*x
		
		escreva("\n", y)
	}
}
