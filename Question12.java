/*
Input -> Hannah
Output -> It is a Palindrome
 */
import java.util.Scanner;
import java.util.Scanner;
public class Question12 {
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        System.out.println("Enter any string");
        String n = sc.nextLine();
        int len = n.length();
        char ch;
        String revstr = "";
        for(int i =0 ;i < n.length();i++){
            ch = n.charAt(i);
            revstr = ch + revstr;
        }
       if(n.equalsIgnoreCase(revstr)){
           System.out.println("It is a Palindrome");
       }
       else {
           System.out.println("It is not a Palindrome");
       }
    }
}
