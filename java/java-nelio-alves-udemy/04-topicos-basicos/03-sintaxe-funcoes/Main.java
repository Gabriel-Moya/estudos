import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int a, b, c, higher;

        System.out.println("Enter three numbers: ");
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();

        higher = max(a, b, c);
        showResult(higher);

        sc.close();

    }

    public static int max(int x, int y, int z) {
        if (x > y && x > z){
            return x;
        } else if (y > z) {
            return y;
        } else {
            return z;
        }
    }

    public static void showResult(int value) {
        System.out.println("Higher = " + value);
    }

}
