import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Program {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        ArrayList<String> nomes = new ArrayList();

        System.out.println("Digite quantos nomes irá inserir:");
        int total = sc.nextInt();

        System.out.println("Digite os nomes:");

        for (int i = 0; i < total; i++) {
            String nome = sc.next();
            nomes.add(nome);
        }

        System.out.println("Ordem normal:");
        System.out.println(nomes);
        System.out.println();

        System.out.println("Ordem inversa:");
        Collections.reverse(nomes);
        System.out.println(nomes);

    }

}
