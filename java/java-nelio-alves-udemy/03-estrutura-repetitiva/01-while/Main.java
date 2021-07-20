import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int x;
		int soma = 0;
		
		x = sc.nextInt();
		
		while(x != 0) {
			soma += x;
			x = sc.nextInt();
		}
		
		System.out.println(soma);

		sc.close();
	}

}
