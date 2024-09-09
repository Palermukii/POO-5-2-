package Main;
import java.util.Scanner;
import javax.swing.JOptionPane;

public class Kranki {
	public static void main(String[] args) {
		Scanner myObj = new Scanner(System.in);
		System.out.println("Elija un ejercicio: ");
		int decision = myObj.nextInt();
		
		switch(decision) {
		case 1:
			ejercicio1();
			break;
		case 2:
			ejercicio2();
			break;
		case 3:
			ejercicio3();
			break;
		case 4:
			ejercicio4();
			break;
		case 5:
			ejercicio5();
			break;
		case 6:
			ejercicio6();
			break;
		case 7:
			ejercicio7();
			break;
		case 8:
			ejercicio8();
			break;
		case 9:
			ejercicio9();
			break;
		case 10:
			ejercicio10();
			break;
		case 11:
			ejercicio11();
			break;
		case 12:
			ejercicio12();
			break;
		}
		myObj.close();
	}
	
	private static void ejercicio1() {
		Scanner ej1 = new Scanner(System.in);
		System.out.println("Ingrese el primer numero: ");
		double numero1 = ej1.nextDouble();
		System.out.println("Ingrese el segundo numero: ");
		double numero2 = ej1.nextDouble();
		System.out.println("La suma de ambos numeros es de " + (numero1 + numero2));
		System.out.println("La resta de ambos numeros es de " + (numero1 - numero2));
		System.out.println("La multiplicacion de ambos numeros es de " + (numero1 * numero2));
		System.out.println("La division de ambos numeros es de " + (numero1 / numero2));
		System.out.println("El modulo de ambos numeros es de " + (numero1 % numero2));
	}
	private static void ejercicio2() {
		Scanner ej2 = new Scanner(System.in);
		System.out.println("Ingrese el primer numero: ");
		double numero1 = ej2.nextDouble();
		System.out.println("Ingrese el segundo numero: ");
		double numero2 = ej2.nextDouble();
		if(numero1 > numero2) {System.out.println("El numero 1 ("+numero1+") es mayor");}
		else if(numero2 > numero1 ) {System.out.println("El numero 2 ("+numero2+") es mayor");}
		else {System.out.println("Son iguales");}
	}
	private static void ejercicio3() {
		String nombre = "Tomas";
		System.out.println("Bienvenido, "+ nombre);
	}
	private static void ejercicio4() {
		System.out.println("Introduzca su nombre: ");
		Scanner ej4 = new Scanner(System.in);
		String nombre = ej4.nextLine();
		System.out.println("Bienvenido, "+ nombre);
	}
	private static void ejercicio5() {
		String texto=JOptionPane.showInputDialog("Introduce un radio");
		
		double radio=Double.parseDouble(texto);

		double area=Math.PI*Math.pow(radio, 2);
		JOptionPane.showMessageDialog(null, "El area del circulo es " + area);
		}
	private static void ejercicio6() {
		String texto=JOptionPane.showInputDialog("Introduce un numero");
		double numero = Double.parseDouble(texto);
		if(numero % 2 == 0) {
		JOptionPane.showMessageDialog(null, "El numero " + numero + " es divisible por dos");
		}
		else {	JOptionPane.showMessageDialog(null, "El numero " + numero + " no es divisible por dos");}
	}
	private static void ejercicio7() {
		
		String texto = JOptionPane.showInputDialog("Introduce un numero");
		int numero = Integer.parseInt(texto);
		char codigo = (char)numero;
		
		JOptionPane.showMessageDialog(null, "El numero " + numero + " es el caracter " + codigo + " en la tabla ASCII");
		System.out.println(codigo);
	} // No muestra bien el caracter del codigo ASCII
	private static void ejercicio8() {
        String texto=JOptionPane.showInputDialog("Introduce un caracter ASCII");
        char caracter=texto.charAt(0);
        int codigo=(int)caracter;
		JOptionPane.showMessageDialog(null, "El caracter " + numero + " tiene el codigo " + codigo + " en la tabla ASCII");

        System.out.println(codigo);
	}
	private static void ejercicio9() {
		double IVA = 1.21;
		String texto = JOptionPane.showInputDialog(null, "Ingrese un monto");
		double monto = Double.parseDouble(texto);
		double precioFinal = monto * IVA;
		JOptionPane.showMessageDialog(null, "El precio final es de " + precioFinal);
	}
	private static void ejercicio10() {
		int i = 1;
		while(i <= 100) {
		//	JOptionPane.showMessageDialog(null, i);
			System.out.println(i);
			i++;
		}
	}
	private static void ejercicio11() {
		for(int i = 1; i <= 100;i++) {
			//	JOptionPane.showMessageDialog(null, i);
				System.out.println(i);
			}
	}
	private static void ejercicio12() {
		for(int i = 1; i <= 100;i++) {
			if(i % 6 == 0) {
			//	JOptionPane.showMessageDialog(null, i);
				System.out.println(i);
			}
		}
	}
}
