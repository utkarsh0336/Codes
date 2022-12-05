package com.company;
import java.util.Scanner;
public class PS_CH_05 {
    public static void main(String[] args) {
        // Question 1
        Scanner sc = new Scanner(System.in);
//        for(int i = 0;i<4;i++){
//            for(int j = 0;j<4-i;j++){
//                System.out.print("*");
//            }
//            System.out.println();
//        }
//        // Question 2.
//        System.out.println("Enter the number upto which you want the sum of even numbers");
//        int n = sc.nextInt();
//        int sum = 0;
//       int a = 0;
//       while(a != 2*n+2){
//           sum+=a;
//           a+=2;
//       }
//        System.out.println("The sum of " + n + " even numbers is " + sum);
//
//        // Question 3.
//        System.out.println("Enter the number you want multiplication table of");
//        int n1 = sc.nextInt();
//        for(int i = 1; i<=10; i++){
//            System.out.println(n1 + " * " + i + " = " + n1*i);
//        }
//
//        // Question 4.
//        System.out.println("Multiplication table of 10 in reverse order");
//        for(int i = 10; i>=1; i--){
//            System.out.println("10" + " * " + i + " = " + 10*i);
//        }
//        // Question 5.
//        System.out.println("Enter the number you want factorial of");
//        int n3 = sc.nextInt();
//        int product = 1;
//        for(int i = 1;i<=n3;i++){
//            product *= i;
//        }
//        System.out.println("The factorial of " + n3 + " is " + product);
//        // Question 6.
//        System.out.println("Enter the number you want factorial of (using while loop)");
//        int n4 = sc.nextInt();
//        int product1 = 1;
//        while(n4 != 1){
//            product1 *= n4;
//            n4--;
//        }
//        System.out.println("The factorial of " + n3 + " is " + product1);
        // Question 7.  (Doubt)
//        int i = 0;
//        int j = 0;
//        while(i != 4){
//            while(j != 4-i){
//                System.out.print("*");
//                j++;
//            }
//            System.out.println();
//            i++;
//        }
        // Question 9.
        int n9 = 8;
        int sum = 0;
        for(int i = 1; i<=10; i++){
            System.out.println(n9 + " * " + i + " = " + n9*i);
            sum += (n9*i);
        }
        System.out.println("The sum of product of 8 is " +  sum  );

    }
}
