//package com.company;
//import java.util.Scanner;
//public class Java_Recursion {
//    static int factorial_iterative(int n){
//        if(n == 1 || n == 0){
//            return 1;
//        }
//        else {
//            int product = 1;
//            for(int i = 1; i<n; i++){   // 1 to n
//                product *= i;
//            }
//            return product;
//        }
//    static int factorial(int b){
//            // Factorial(n) = n * (n-1) * ..... * 1
//            // Factorial 0 = 1
//            if (n == 0 || n == 1) {
//                return 1;
//            } else {
//                return n * factorial(n - 1);
//            }
//        }
//   public static void main(String[] args){
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter the number you want factorial of");
//        int a = sc.nextInt();
//        int b = 4;
//        int result = factorial_iterative(a);
//        System.out.println("The factorial of " + a + " is " + result );
//        System.out.println("The factorial of " + b + " is " + factorial(b));
//    }
//}
