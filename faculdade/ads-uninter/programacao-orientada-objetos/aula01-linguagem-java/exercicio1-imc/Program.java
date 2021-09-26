import java.util.Scanner;

public class Program {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Digite o seu peso (Kg):");
        float peso = sc.nextFloat();

        System.out.println("Digite sua altura (M):");
        float altura = sc.nextFloat();

        float imc = peso / (altura * altura);

        System.out.printf("Seu IMC é: %.2f", imc);

    }

}
