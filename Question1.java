/*
Input -> 7
Output -> It is odd
 */
import java.util.Scanner;
public class Question1 {
    public static void main(String[] args) {
        System.out.println("Enter any number");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String res = (n%2 == 0)?"It is even":"It is odd";
        System.out.println(res);
    }
}
