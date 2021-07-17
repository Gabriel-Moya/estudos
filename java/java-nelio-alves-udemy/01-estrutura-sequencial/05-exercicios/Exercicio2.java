import java.util.Locale;
import java.util.Scanner;

// Faça um programa para ler o valor do raio de um círculo, e depois mostrar o valor da área deste círculo com quatro casas decimais conforme exemplos.
/*
* 
* Exemplo:
* Entrada: 2			Saída: A=12.5664
* Entrada: 100.64		Saída: A=31819.3103
* Entrada: 150.00		Saída: A=70685.7750
* Considere o valor de pi = 3.14159
*
*/

public class Exercicio2 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		
		final double PI = 3.14159;
		double r;
		
		System.out.println("Insira o raio de um circulo:");
		r = sc.nextInt();

		Locale.setDefault(Locale.US);
		System.out.printf("A=%.4f%n", PI*(r*r));
		
		sc.close();

	}

}
