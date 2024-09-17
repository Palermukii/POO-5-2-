package Main;
import java.util.Scanner;
import javax.swing.JOptionPane;

public class Main{
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
		case 13:
			ejercicio13();
			break;
		case 14:
			ejercicio14();
			break;
		case 15:
			ejercicio15();
			break;
		case 16:
			ejercicio16();
			break;
		case 17:
			ejercicio17();
			break;
		case 18:
			ejercicio18();
			break;
		case 19:
			ejercicio19();
			break;
        case 20:
			ejercicio20();
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
	private static void ejercicio13() {
		String texto=JOptionPane.showInputDialog("Introduce el número de ventas");
		int numVentas=Integer.parseInt(texto);
		int sumaVentas=0;
		
		for (int i=0;i<numVentas;i++){
			texto=JOptionPane.showInputDialog("Introduce el precio de la venta"+(i+1));
			int venta=Integer.parseInt(texto);
 
			sumaVentas=sumaVentas+venta;
		}
 
		JOptionPane.showMessageDialog(null, "La suma de las ventas es de " + sumaVentas);
	}
	private static void ejercicio14() {
		String textoA=JOptionPane.showInputDialog("Introduce el valor de a");
		int a=Integer.parseInt(textoA);
		String textoB=JOptionPane.showInputDialog("Introduce el valor de b");
		int b=Integer.parseInt(textoB);
		String textoC=JOptionPane.showInputDialog("Introduce el valor de c");
		int c=Integer.parseInt(textoC);

		double discriminante=Math.pow(b, 2)-(4*a*c);

		System.out.println("El discriminante es " + discriminante);

		if (discriminante>0){
			double x1=((b*(-1))+Math.sqrt(discriminante))/(2*a);
			double x2=((b*(-1))-Math.sqrt(discriminante))/(2*a);

			System.out.println("El valor de x1 es " + x1 + " y el valor de x2 es " + x2);
		}else{
			System.out.println("El discriminante es negativo");
		}
	}
	private static void ejercicio15() {
		int numero;
		do{
			String texto=JOptionPane.showInputDialog("Introduce un numero mayor que 0");
			numero=Integer.parseInt(texto);
		}while(numero<=0);
 
		System.out.println(numero);
	}
	private static void ejercicio16() {
		Scanner myObj16 = new Scanner(System.in);
		int intentos = 3;
		boolean acierto = false;
		String contrasenia = "Kranki";
		String ingresada;
		for(int i = 0; i<intentos && !acierto;i++) {
			System.out.println("Ingrese una contraseña: ");
			ingresada = myObj16.next();
			if(ingresada.equals(contrasenia)) {
				System.out.println("Contraseña acertada");
				acierto = true;
			}
			
		}
	}
	private static void ejercicio17() {
		
		Scanner myObj17 = new Scanner(System.in);
		System.out.println("Introduce un dia de la semana");
        String dia = myObj17.next();
        
        switch(dia){
            case "lunes":
            case "martes":
            case "miercoles":
            case "jueves":
            case "viernes":
                System.out.println("Es un dia laboral");
                break;
            case "sabado":
            case "domingo":
                System.out.println("Es un dia festivo");
            default:
                System.out.println("Introduce un dia de la semana");
        }
	}
	private static void ejercicio18() {
		Scanner myObj18 = new Scanner(System.in);
		System.out.println("Ingrese el primer numero: ");
		int num1 = myObj18.nextInt();
		System.out.println("Ingrese el segundo numero: ");
		int num2 = myObj18.nextInt();
		if(num2 > num1) { // En caso de que el segundo numero ingresado sea menor al primero
			int aux;
			aux = num1;
			num1 = num2;
			num2 = aux;
		}
		int[] numeros = new int[10];
		for(int i = 0; i<numeros.length;i++) {
			numeros[i] = (int)Math.floor(Math.random() * (num1 - num2) + num2);
		}
		for(int i = 0; i<numeros.length;i++) {
			System.out.println(numeros[i]);
		}
	}
	private static void ejercicio19() {
		Scanner myObj19 = new Scanner(System.in);
        int numero=0;
        do{
            System.out.println("Introduce un numero");
            numero=myObj19.nextInt();
        }while(numero<0); int contador=0; for (int i=numero;i>0;i/=10){
            contador++;
        }
 
        if (contador==1){
            System.out.println("El numero "+numero+ " tiene "+contador+" cifra");
        }else{
            System.out.println("El numero "+numero+ " tiene "+contador+" cifras");
        }
	}
	private static void ejercicio20() {
		Scanner myObj20 = new Scanner(System.in);
        System.out.println("Escribi un numero");
        int numero = myObj20.nextInt();
 
		if (numero <= 1) {
            System.out.println("El numero " + numero + " no es primo");
        } else {
 
            int raiz = (int) Math.sqrt(numero);
            int contador = 0;
 
            for (int i = raiz; i > 1; i--) {
                if (numero % i == 0) {
                    contador++;
                }
            }
            System.out.println(">>" + contador);
 
            if (contador < 1) {
                System.out.println("El numero " + numero + " es primo");
            } else {
                System.out.println("El numero " + numero + " no es primo");
            }
 
        }
    }
    

}
