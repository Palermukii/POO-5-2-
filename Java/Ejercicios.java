import java.util.Scanner;  // Import the Scanner class

public class Ejercicios {
    public static void main(String[] args) {
        Scanner myObj = new Scanner(System.in);
        System.out.println("Elija un ejercicio");
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
        }
    myObj.close();

    }

    private static void ejercicio1() {
        for(int i = 1; i <= 100; i++) {
            if(i % 2 == 0) {
                System.out.println(i + " es par");
            } else {
                System.out.println(i);
            }
        }
    }
    private static void ejercicio2() {
        for(int i = 50; i <= 100; i++) {
            if(!primo(i)) {
                System.out.println("El numero " + i + " es primo\n");
            } else {
                divisores(i);
            }


        }
    }
    private static boolean primo(int n) {
      for(int i = 2; i < n; i++) {
          if(n % i == 0) {
              return true;
          }
      }
      return false;
    }

    private static void divisores(int n) {
        if(primo(n)) {
            System.out.println("El numero es " + n);
            System.out.print("Los divisores son: ");
            for(int i= 1; i < n; i++) {
                if(n % i == 0) {
                    System.out.print(i + " ");
                }
            }
            System.out.println("\n");
        }
    }
    private static void ejercicio3() {
        Scanner myObj2 = new Scanner(System.in);
        while (true) {
            System.out.print("Ingresa un número: ");
            int num = myObj2.nextInt();
            if (num > 100 && !primo(num)) {
                System.out.println("Es mayor a 100 y primo");
                break;
            } else {
                System.out.println("No es un número mayor a 100 o no es primo");
            }
        }
        myObj2.close();
    }

    private static int suma(int a, int b){
        return a + b;
    }
    private static int resta(int a, int b){
        return a - b;
    }
    private static int multiplicacion(int a, int b){
        return a * b;
    }
    private static double division(int a, int b){
        return a / b;
    }


    private static void ejercicio4() {
        Scanner myObj3 = new Scanner(System.in);
        while (true) {
            System.out.print("Ingresa el primer número: ");
            int a = myObj3.nextInt();

            System.out.print("Ingresa el segundo número: ");
            int b = myObj3.nextInt();

            System.out.println("Ingrese que tipo de operación aritmética quiere realizar: + (suma), - (resta), * (multiplicación), / (división): ");
            char oper = myObj3.next().charAt(0);

            switch (oper) {
                case '+':
                    System.out.println("La suma de ambos números es " + suma(a, b));
                    break;
                case '-':
                    System.out.println("La resta de ambos números es " + resta(a, b));
                    break;
                case '*':
                    System.out.println("La multiplicación de ambos números es " + multiplicacion(a, b));
                    break;
                case '/':
                    if (b != 0) {
                        System.out.println("La división de ambos números es " + division(a, b));
                    } else {
                        System.out.println("Error: No se puede dividir por cero.");
                    }
                    break;
                default:
                    System.out.println("Ingrese un valor válido");
                    break;
            }
            System.out.println("¿Desea continuar? (s/n): ");
            char continuar = myObj3.next().charAt(0);
            if (continuar == 'n' || continuar == 'N') {
                break;
            }
        }
        myObj3.close();
    }
    private static void ejercicio5() {
        int nums[] = {1, 3 ,5, 10};
        System.out.println("Los numeros de la lista son: ");
        for(int i = 0; i < nums.length; i++) {
            System.out.println(nums[i]);
        }
        System.out.println("Los siguientes numeros son primos");
        for(int n : nums) {
            if(!primo(n)) {
                System.out.println(n + " es primo");
            }
        }
    }
}
