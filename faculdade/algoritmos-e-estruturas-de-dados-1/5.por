programa {
	funcao inicio() {
		inteiro n, x
		real H=0.0
		
		escreva("Insira um número inteiro: ")
		leia(n)
		
		para (x=1; x<=n; x++)
		{
		se (x%2==0)
		    H= H - (1.0/x)
		    
		    senao 
		    H= H + (1.0/x)
		}
		escreva("\n", H)
	}
}
