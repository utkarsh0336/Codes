package com.company;
import java.util.Scanner;
public class switch_case {
    public static void main(String[] args) {
//        System.out.println("Enter your age");
//        Scanner n = new Scanner(System.in);
//        int age = n.nextInt();
//        char a ='r';
        String name = "Shubham";
//        if(age > 56){
//            System.out.println("You are Experienced");
//        }
//        else if(age < 56){
//            System.out.println("You are not experienced");
//        }
//        else if(age > 46){
//            System.out.println("You are semi experienced");
//        }
//        else if(age > 36){
//            System.out.println("You are semi semi experienced");
//        }
//        else {
//            System.out.println("You are not experienced");
//        }
        switch (name){
            case "Shubham":
                System.out.println("You are going to become an Adult!!");
                break;
            case "Abhi":
                System.out.println("You are going to join a Job!!");
                break;
            case "Utkarsh":
                System.out.println("You are going to get Retired!!");
                break;
            default:
                System.out.println("Enjoy your Life!!");
        }
        System.out.println("Thanks for using my Java Code");
    }
}
