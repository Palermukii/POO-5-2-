import java.util.Scanner;  // Import the Scanner class

class Ejercicios {
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
        }
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
}
