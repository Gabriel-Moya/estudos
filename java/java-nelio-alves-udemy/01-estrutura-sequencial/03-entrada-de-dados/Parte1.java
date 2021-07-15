import java.util.Scanner;

public class Parte1 {

	public static void main(String[] args) {
		
		// Para fazer entrada de dados, criamos um objeto do tipo "Scanner"
		Scanner sc = new Scanner(System.in);
		
		// Leitura de strings
		String s;
		System.out.print("Digite uma palavra: ");
		s = sc.next();
		System.out.println("Você digitou: " + s);
		
		// Leitura de inteiros
		int x;
		System.out.print("Digite um número inteiro: ");
		x = sc.nextInt();
		System.out.println("Você digitou: " + x);
		
		// Leitura de doubles
		double y;
		System.out.print("Digite um número decimal: ");
		// A nextDouble usa a localização do sistema, se estiver em pt-BR usa "," como separador do decimal
		// Se quiser usar "." precisa definir a Locale.setDefault() acima do new Scanner (nesse caso, acima da linha 8)
		y = sc.nextDouble();
		// Mesmo se a localização estiver pt-BR a impressão irá sair com o ".", pois a println não puxa a locale do sistema 
		System.out.println("Você digitou: " + y);
		
		// Leitura de caracteres
		char c;
		// Utilizando a charAt(0) irá fazer a leitura somente da primeira letra, mesmo se o usuário digitar uma palavra
		System.out.print("Digite um caracter: ");
		c = sc.next().charAt(0);
		System.out.println("Você digitou: " + c);
		
		//Lendo vários dados na mesma linha
		String a;
		int b;
		double d;
		
		System.out.println("Digite uma string, um inteiro e um numero decimal, separando-os por espaço: ");
		a = sc.next();
		b = sc.nextInt();
		d = sc.nextDouble();
		
		System.out.println("Dados digitados:");
		System.out.println(a);
		System.out.println(b);
		System.out.println(d);
		
		sc.close();

	}

}
