package com.college;
import java.util.Scanner;
public class hw_max {
    public static void main(String[] args) {
        int num1,num2,num3;
        Scanner sc =  new Scanner(System.in);
        System.out.println("Enter the first number");
        num1 = sc.nextInt();
        System.out.println("Enter the second number");
        num2 = sc.nextInt();
        System.out.println("Enter the third number");
        num3 = sc.nextInt();
        if(num1 > num2){

            if(num1>num3){
                System.out.println("The largest among 3 numbers is " + num1);
            }
        } if(num2 > num1){
            if(num2>num3){
                System.out.println("The largest among 3 numbers is " + num2);
            }
        } if(num3 > num2){
            if(num3>num1){
                System.out.println("The largest among 3 numbers is " + num3);
            }
        }

    }
}

