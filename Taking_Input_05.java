package com.company;
import java.util.Scanner;
public class Taking_Input_05 {
    public static void main(String[] args) {
        System.out.println("Taking input from the user");
        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter number 1");
//        int a  = sc.nextInt();
//        float a = sc.nextFloat();
//        System.out.println("Enter number 2");
//        int b  = sc.nextInt();
//        float b = sc.nextFloat();
//        float sum = a+b;
//        System.out.println("The sum of these numbers is ");
//        System.out.println(sum);
//        boolean b1 = sc.hasNextInt();
//        System.out.println(b1);
//        String str = sc.next();   Reads a word only
        String str = sc.nextLine();  // Read a whole sentence
        System.out.println(str);



    }
}

