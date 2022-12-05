package com.college;
import java.util.Scanner;
public class Sum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the first number");
        int num1 = Integer.parseInt(args[0]);
        System.out.println("Enter the second number");
        int num2 = Integer.parseInt(args[1]);
        System.out.println("Enter the third number");
        int num3 = Integer.parseInt(args[2]);
        System.out.println("Enter the fourth number");
        int num4 = Integer.parseInt(args[3]);
        System.out.println("Enter the fifth number");
        int num5 = Integer.parseInt(args[4]);
        int sum = num1+num2+num3+num4+num5;
        System.out.println("The sum is " + sum);




    }

}
