programa {
	funcao inicio() {
		inteiro n, i, dividir=0
		
		escreva("Insira um n�mero inteiro: ")
		leia(n)
		
		para (i=1; i<=n; i++)
		{
		se (n%i==0)
		dividir = dividir+1
		}
		
		
		se (dividir==2)
		    escreva("� um n�mero primo")
		    
		    senao 
		    escreva("N�o � um n�mero primo")
		
	}
}