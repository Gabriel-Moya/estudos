import java.util.Locale;
import java.util.Scanner;

/*
 * 
 * Fazer um programa para ler o c�digo de uma pe�a 1, o n�mero de pe�as 1, o valor unit�rio de cada pe�a 1,
 * o c�digo de uma pe�a 2, o n�mero de pe�as 2 e o valor unit�rio de cada pe�a 2. Calcule e mostre o valor a ser pago.
 * 
 * Exemplos:
 * Entrada:	12	1	5.30
 * 			16	2	5.10	Sa�da: VALOR A PAGAR: R$ 15.50
 * 	
 * Entrada: 13	2	15.30
 * 			161	4	5.20	Sa�da: VALOR A PAGAR: R$ 51.40
 * 
 * Entrada: 1	1	15.10
 * 			2	1	15.10	Sa�da: VALOR A PAGAR: R$ 30.20
 * 
 */


public class Exercicio5 {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int codePc1, qtPc1, codePc2, qtPc2;
		double valuePc1, valuePc2, total;
		
		// Data capture
		System.out.println("Codigo da peca 1:");
		codePc1 = sc.nextInt();
		
		System.out.println("Quantidade de peca 1:");
		qtPc1 = sc.nextInt();
		
		System.out.println("Preco da peca 1:");
		valuePc1 = sc.nextDouble();
		
		System.out.println("Codigo da peca 2:");
		codePc2 = sc.nextInt();
		
		System.out.println("Quantidade de peca 2:");
		qtPc2 = sc.nextInt();
		
		System.out.println("Preco da peca 2:");
		valuePc2 = sc.nextDouble();
		
		// Total calculate
		total = (valuePc1 * qtPc1) + (valuePc2 * qtPc2);
		
		System.out.printf("VALOR A PAGAR: R$ %.2f\n", total);
		
		sc.close();

	}

}
