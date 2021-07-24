package application;

import entities.Rectangle;

import java.util.Locale;
import java.util.Scanner;

public class Program {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        Rectangle rectangle;
        rectangle = new Rectangle();

        System.out.println("Enter rectangle widht and height:");
        rectangle.width = sc.nextDouble();
        rectangle.height = sc.nextDouble();

        System.out.println(rectangle);

        sc.close();

    }

}
