import java.util.Scanner;

// Fa�a um programa para ler dois valores inteiros, e depois mostrar na tela a soma desses n�meros com uma mensagem explicativa, conforme exemplos.
/*
 * 
 * Exemplo:
 * Entrada: 10	30		Sa�da: SOMA = 40
 * Entrada: -30	10		Sa�da: SOMA = -20
 * Entrada: 0	0		Sa�da: SOMA = 0
 * 
 * */
public class Exercicio1 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int a, b;
		
		System.out.println("Insira um n�mero inteiro:");
		a = sc.nextInt();
		
		System.out.println("Insira outro n�mero:");
		b = sc.nextInt();
		
		System.out.printf("SOMA = %d%n", a + b);
		
		sc.close();

	}

}
