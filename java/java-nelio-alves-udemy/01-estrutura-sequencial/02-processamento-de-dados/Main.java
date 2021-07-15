
public class Main {

	public static void main(String[] args) {
		
		int x, y;
		double z;
		
		x = 5;
		y = 2 * x;
		z = 2 * x;
		
		System.out.println(x);
		System.out.println(y);
		System.out.println(z);
		
		
		// Calculando área de trapézio		# É uma boa prática usar o .0 ao final do double, mesmo em número sem casa decimal
		//									  Para float usa o f, exemplo:	float x; x = 2f;
		double b, B, h, area;
		
		b = 6.0;
		B = 8.0;
		h = 5.0;
		area = (b + B) / 2.0 * h;
		System.out.println(area);
		
		
		// Casting de valores
		int n1, n2;
		double resultado;
		
		n1 = 5;
		n2 = 2;
		resultado = (double) n1 / n2;
		System.out.println(resultado);
		
		
		// Caso for perder informação o compilador irá acusar erro, sendo necessário realizar o casting também nesses casos
		double a1;
		int a2;
		
		a1 = 5.0;
		a2 = (int) a1;
		System.out.println(a2);

	}

}
