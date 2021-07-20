import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Mascara 32 (decimal) em binario para fazer a comparacao bit a bit
        int mask = 0b00100000;
        int n = sc.nextInt();

        if ( (n & mask) != 0 ) {
            System.out.println("6th bit is true!");
        } else {
            System.out.println("6th is false!");
        }

        sc.close();

    }

}
