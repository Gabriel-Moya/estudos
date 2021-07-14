import java.util.Locale;

public class Main {

	public static void main(String[] args) {
	    
	    int y = 32;
	    double x = 10.35784;

	    // Saída de dados
	    System.out.println(y);	// println irá fazer a quebra de linha no final
	    System.out.println(x);
	    System.out.printf("%.2f%n", x);	// Para realizar a quebra de linha com o printf usa %n
	    System.out.printf("%.4f%n", x);
	    
	    // Definindo localização (Aqui irá separar a casa decimal com ponto ao invés de vírgula
	    Locale.setDefault(Locale.US);
	    System.out.printf("%.4f%n", x);
	    
	    // Concatenar um elemento em um mesmo comando
	    System.out.println("RESULTADO = " + x + " metros");
	    System.out.printf("RESULTADO = %.2f metros\n", x);	// Também é aceito o "\n" como quebra de linha
	    
	    // Concatenar múltiplos elementos
	    String nome = "Maria";
	    int idade = 31;
	    double renda = 4000.0;
	    System.out.printf("%s tem %d anos e ganha R$ %.2f reais", nome, idade, renda);

	  }

}
