programa {
	funcao inicio() {
		inteiro n, i, dividir=0
		
		escreva("Insira um número inteiro: ")
		leia(n)
		
		para (i=1; i<=n; i++)
		{
		se (n%i==0)
		dividir = dividir+1
		}
		
		
		se (dividir==2)
		    escreva("É um número primo")
		    
		    senao 
		    escreva("Não é um número primo")
		
	}
}