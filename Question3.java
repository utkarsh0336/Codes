/*
Input -> 5 terms
Output -> 2.2833335
 */
import java.util.Scanner;
public class Question3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the term upto which you want the Harmonic Sum");
        float n = sc.nextInt();
        float sum = 0.0f;
        for(float i = 1;i<=n;i++){
            sum=sum+(1/i);
        }
        System.out.println("The Harmonic Sum is " + sum);
    }
}
