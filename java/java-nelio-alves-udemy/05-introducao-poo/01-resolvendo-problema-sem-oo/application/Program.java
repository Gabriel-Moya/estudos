// Fazer um programa para ler as medidas dos lados de dois triângulos X e Y (suponha medidas validas).
// Em seguida, mostrar o valor das áreas dos dois triângulos e dizer qual dos dois triângulos possui a maior área.
// A fórmula para calcular a área de um triângulo a partir das medidas de seus lados A, B e C é a seguinte (fórmula de Heron).

//          area = sqrt(p(p-a)(p-b)(p-c))   onde p = (a+b+c)/2

package application;

import java.util.Locale;
import java.util.Scanner;

public class Program {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        double xA, xB, xC, yA, yB, yC;
        double p, areaX, areaY;

        System.out.println("Enter the measures os triangle X: ");
        xA = sc.nextDouble();
        xB = sc.nextDouble();
        xC = sc.nextDouble();

        System.out.println("Enter the measures os triangle Y: ");
        yA = sc.nextDouble();
        yB = sc.nextDouble();
        yC = sc.nextDouble();

        p = (xA + xB + xC) / 2.0;
        areaX = Math.sqrt(p * (p-xA) * (p-xB) * (p-xC));

        p = (yA + yB + yC) / 2.0;
        areaY = Math.sqrt(p * (p-yA) * (p-yB) * (p-yC));

        System.out.printf("Triangle X area: %.4f%n", areaX);
        System.out.printf("Triangle Y area: %.4f%n", areaY);

        if (areaX > areaY) {
            System.out.println("Large area: X");
        } else {
            System.out.println("Large area: Y");
        }

    }

}
