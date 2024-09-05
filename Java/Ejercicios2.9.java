package Main;
import java.util.Scanner;
import javax.swing.JOptionPane;

public class Main {
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
	
	
}
