package com.company;
import java.util.Scanner;
public class Do_While_LOOP {
    public static void main(String[] args) {
        int a = 0;
        Scanner sc = new Scanner(System.in);
        do {
            System.out.println(a);
            a++;
        }while(a<5);
        // Quick Quiz
        System.out.println("Enter the number upto which you want to print the natural numbers");
        int n = sc.nextInt();
        int i = 1;
        do{
            System.out.println(i);
            i++;
        }while(i<=n);

    }
}
