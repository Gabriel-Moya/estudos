import java.util.Scanner;

// Faça um programa para ler dois valores inteiros, e depois mostrar na tela a soma desses números com uma mensagem explicativa, conforme exemplos.
/*
 * 
 * Exemplo:
 * Entrada: 10	30		Saída: SOMA = 40
 * Entrada: -30	10		Saída: SOMA = -20
 * Entrada: 0	0		Saída: SOMA = 0
 * 
 * */
public class Exercicio1 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int a, b;
		
		System.out.println("Insira um número inteiro:");
		a = sc.nextInt();
		
		System.out.println("Insira outro número:");
		b = sc.nextInt();
		
		System.out.printf("SOMA = %d%n", a + b);
		
		sc.close();

	}

}
