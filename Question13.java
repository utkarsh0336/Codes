/*
Input ->     Enter a line of integers with a space
             2 3 4 5 6 7
             
Output ->    2 3 4 5 6 7
             The sum is 27             
 */
import java.util.Scanner;
import java.util.StringTokenizer;
public class Question13 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a line of integers with a space");
        int n1,sum=0;
        String n = sc.nextLine();
        StringTokenizer T = new StringTokenizer(n," ");
        while (T.hasMoreTokens()) {
            String temp = T.nextToken();
            n1 = Integer.parseInt(temp);
            sum += n1;
        }
            do{
                System.out.println(n);
            }while(T.hasMoreTokens());
        System.out.println("The sum is " + sum);

    }
}
