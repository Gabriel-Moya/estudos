import java.util.Scanner;

/*
 * 
 * Fazer um programa para ler quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferenca do produto
 * de A e B pelo produto de C e D segundo a formula: DIFERENCA = (A * B - C * D).
 * 
 * Exemplo:
 * Entrada: 5	6	7	8		Saida: DIFERENCA = -26
 * Entrada: 5	6	-7	8		Saida: DIFERENCA = 86
 * 
 */

public class Exercicio3 {

	public static void main(String[] args) {
		
		int a, b, c, d, diferenca;
		
		Scanner sc = new Scanner(System.in);

		System.out.println("Digite 4 numeros inteiros:");
		
		a = sc.nextInt();
		b = sc.nextInt();
		c = sc.nextInt();
		d = sc.nextInt();
		
		diferenca = (a * b - c * d);
		
		System.out.printf("DIFERENCA = %d%n", diferenca);
		
		sc.close();

	}

}
