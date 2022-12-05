/*
Input -> 7 terms
Output -> 0 1 1 2 3 5 8
 */
import java.util.Scanner;
public class Question4 {
    public static int Fibo(int num) {
        if (num <= 1) {
            return num;
        } else {
            return Fibo(num - 1) + Fibo(num - 2);
        }
    }
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter the number upto which you want the Fibonacci Series");
            int num = sc.nextInt();
           for(int i = 0;i<num;i++){
               System.out.print(Fibo(i) + " ");
           }
            }
        }
