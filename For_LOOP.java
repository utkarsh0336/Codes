package com.company;
import java.util.Scanner;
public class For_LOOP {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
//        for(int i = 1; i<=10; i++){
//            System.out.println(i);
//        }
        // Quick Quiz
//        System.out.println("Enter the number upto which you want to display the odd numbers");
//        int n = sc.nextInt();
//        for(int i = 1;i<=n; i++){
//            if(i%2 != 0){
//                System.out.println(i);
//            }
//
//        }
        System.out.println("Enter the number upto which you want to print the natural numbers in reverse order");
        int n = sc.nextInt();
        for(int i = n; i>=1; i--){
            System.out.println(i);
        }

    }
}
