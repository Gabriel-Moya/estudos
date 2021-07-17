import java.util.Locale;
import java.util.Scanner;

/*
 * 
 * Fazer um programa que leia o numero de um funcionario, seu numero de horas trabalhadas, o valor que recebe por
 * hora e calcula o salario desse funcionario. A seguir, mostre o numero e o salario do funcionario, com duas casas
 * decimais.
 * 
 * Exemplo:
 * Entrada: 25	100	5.50		Saida: NUMBER = 25		SALARY = U$ 550.00
 * Entrada: 1	200	20.50		Saida: NUMBER = 1		SALARY = U$ 4100.00
 * Entrada: 6	145	15.55		Saida: NUMBER = 6		SALARY = U$ 2254.75
 * 
 */

public class Exercicio4 {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int number, hoursWorking;
		double valueHour, salary;
		
		System.out.println("Digite o numero do funcionario:");
		number = sc.nextInt();
		
		System.out.println("Digite a quantidade de horas trabalhadas:");
		hoursWorking = sc.nextInt();
		
		System.out.println("Valor da hora do funcion�rio:");
		valueHour = sc.nextDouble();
		
		salary = hoursWorking*valueHour;
		
		System.out.printf("NUMBER = %d\n", number);
		System.out.printf("SALARY = U$ %.2f\n", salary);

		sc.close();

	}

}
