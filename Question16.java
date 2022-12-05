/*
Input ->    Enter the number you want factorial of
             -3

Output ->   We can't find the factorial of a negative number
            The Factorial of -3 is 0 which is invalid

 */
import java.util.Scanner;
class NegNumberException extends Exception{
    @Override
    public String toString() {
        return "We can't find the factorial of a negative number";
    }
}
public class Question16 {
   public static int factorial(int n) {
       try {
           if (n == 0 || n == 1) {
               return 1;
           } else if (n > 0) {
               return n * factorial(n - 1);
           } else {
               throw new NegNumberException();
           }
       }
       catch (NegNumberException e){
           System.out.println(e);
       }
      return 0;
   }
public static void main(String args[]){
       Scanner sc = new Scanner(System.in);
       System.out.println("Enter the number you want factorial of");
       int n = sc.nextInt();

    System.out.println("The Factorial of " + n + " is " + factorial(n) + " which is invalid");
   }
}
