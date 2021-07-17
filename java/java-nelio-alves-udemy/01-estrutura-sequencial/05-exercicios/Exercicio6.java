import java.util.Locale;
import java.util.Scanner;

/*
 * 
 *
 * Fazer um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
 * a) a área do triângulo retângulo que tem A por base e C por altura.
 * b) a área do círculo de raio C. (pi = 3.14159)
 * c) a área do trapézio que tem A e B por bases e C por altura.
 * d) a área do quadrado que tem lado B.
 * e) a área do retângulo que tem lados A e B.
 * 
 * 
 */

public class Exercicio6 {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		final double PI = 3.14159;
		double A, B, C;
		double triangle, circle, trapeze, square, rectangle;
		
		// Data capture
		System.out.println("Digite os 3 valores decimais (Separados por espaço:)");
		A = sc.nextDouble();
		B = sc.nextDouble();
		C = sc.nextDouble();
		
		// Calculations
		triangle = (A * C)/2;
		circle = PI * (C*C);
		trapeze = ((A + B) * C)/2;
		square = B*B;
		rectangle = A*B;
		
		// Data outputs
		System.out.printf("TRIANGULO: %.3f\n", triangle);
		System.out.printf("CIRCULO: %.3f\n", circle);
		System.out.printf("TRAPEZIO: %.3f\n", trapeze);
		System.out.printf("QUADRADO: %.3f\n", square);
		System.out.printf("RETANGULO: %.3f\n", rectangle);
		
		sc.close();

	}

}
