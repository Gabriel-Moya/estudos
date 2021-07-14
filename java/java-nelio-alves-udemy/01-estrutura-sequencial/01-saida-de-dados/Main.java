import java.util.Locale;

public class Main {

	public static void main(String[] args) {
	    
	    int y = 32;
	    double x = 10.35784;

	    // Sa�da de dados
	    System.out.println(y);	// println ir� fazer a quebra de linha no final
	    System.out.println(x);
	    System.out.printf("%.2f%n", x);	// Para realizar a quebra de linha com o printf usa %n
	    System.out.printf("%.4f%n", x);
	    
	    // Definindo localiza��o (Aqui ir� separar a casa decimal com ponto ao inv�s de v�rgula
	    Locale.setDefault(Locale.US);
	    System.out.printf("%.4f%n", x);
	    
	    // Concatenar um elemento em um mesmo comando
	    System.out.println("RESULTADO = " + x + " metros");
	    System.out.printf("RESULTADO = %.2f metros\n", x);	// Tamb�m � aceito o "\n" como quebra de linha
	    
	    // Concatenar m�ltiplos elementos
	    String nome = "Maria";
	    int idade = 31;
	    double renda = 4000.0;
	    System.out.printf("%s tem %d anos e ganha R$ %.2f reais", nome, idade, renda);

	  }

}
