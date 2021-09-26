import java.util.Scanner;

public class Program {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Digite seu palpite:");
        int palpite = sc.nextInt();

        String msg;

        while(palpite != 10000) {

            /* Operador ternário */
            msg = palpite < 1000 ? "Um pouco mais..." : "Um pouco menos...";
            System.out.println(msg);

            /*
            if(palpite < 10000){
                System.out.println("Um pouco mais...");
            }
            else {
                System.out.println("Um pouco menos...");
            }
            */

            System.out.println("Digite seu próximo palpite:");
            palpite = sc.nextInt();
        }
        System.out.println("Está correto!");

    }

}
