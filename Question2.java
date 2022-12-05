/*
Input -> x^2 + 2x^1 + 9
Output -> There are no real solutions
 */
import java.util.Scanner;
public class Question2 {
    public static void main(String[] args) {
        double D;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the coefficient of x^2");
        double a = sc.nextInt();
        System.out.println("Enter the coefficient of x");
        double b = sc.nextInt();
        System.out.println("Enter the constant term");
        double c = sc.nextInt();
        D = (b*b) - 4*a*c;
        if(D < 0){
            System.out.println("There are no real solutions");
        }
        else if (D == 0){
            double r1 = ((-b)+Math.sqrt(D))/(2*a);
            double r2 = ((-b)-Math.sqrt(D))/(2*a);
            System.out.println("The real roots are " + r1 + " and " + r2);
        }
        else{
            double r1 = ((-b)+Math.sqrt(D))/(2*a);
            double r2 = ((-b)-Math.sqrt(D))/(2*a);
            System.out.println("The real roots are " + r1 + " and " + r2);
        }
    }
}
