import java.util.Locale;

public class ExercicioFixacao {

	/*
	 * 		Inicie as seguintes variáveis:
	 * 
	 *	String product1 = "Computer";
	 *	String product2 = "Office desk";
	 * 
	 *	int age = 30;
	 *	int code = 5290;
	 *	char gender = 'F';
	 * 
	 *	double price1 = 2100.0;
	 *	double price2 = 650.0;
	 *	double measure = 53.234567;
	 *
	 * 		Em seguida, usando os valores das variáveis, produza a seguinte saída no console:
	 * 
	 * 	Products:
	 * 	Computer, which price is $ 2100,00
	 * 	Office desk, which price is $ 650,50
	 * 
	 * 	Record: 30 years old, code 5290 and gender: F
	 * 
	 * 	Measure with eight decimal places: 53,23456700
	 * 	Rouded (three decimal places): 53,235
	 * 	US decimal point: 53.235
	 */
	
	public static void main(String[] args) {
		
		String product1 = "Computer";
		String product2 = "Office desk";
		
		int age = 30;
		int code = 5290;
		char gender = 'F';
		double price1 = 2100.0;
		double measure = 53.234567;
		double price2 = 650.0;
		
		System.out.println("Products:");
		System.out.printf("%s, which pric is $ %.2f\n", product1, price1);
		System.out.printf("%s, which pric is $ %.2f\n", product2, price2);

		System.out.printf("\nRecord: %d years old, code %d and gender: %c\n", age, code, gender);
		
		System.out.printf("\nMeasure with eight decimal places: %.8f\n", measure);
		System.out.printf("Rouded (three decimal places): %.3f\n", measure);
		Locale.setDefault(Locale.US);
		System.out.printf("US decimal point: %.3f\n", measure);

	}

}
