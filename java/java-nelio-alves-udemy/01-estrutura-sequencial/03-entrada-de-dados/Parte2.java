import java.util.Scanner;

public class Parte2 {

	public static void main(String[] args) {
		
		// Realizando a leitura de um texto até a quebra de linha
		Scanner sc = new Scanner(System.in);
		
		int x;
		String s1, s2, s3;
		
		x = sc.nextInt();
		sc.nextLine();		// Para fazer a limpeza do buffer do teclado do int anterior
		s1 = sc.nextLine();
		s2 = sc.nextLine();
		s3 = sc.nextLine();
		
		System.out.println("Dados digitados:");
		System.out.println(x);
		System.out.println(s1);
		System.out.println(s2);
		System.out.println(s3);
		
		sc.close();

	}

}
