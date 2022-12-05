package com.company;
import java.util.Scanner;
public class CH_04_PS {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // Question 1.
//        int a = 10;
//        if(a = 11){
//            System.out.println("I am 11");
//        }
//        else{
//            System.out.println("I am not 11");
//        }

        // Question 2.
//        System.out.println("Enter the marks of your subject 1 ");
//        int marks1 = sc.nextInt();
//        System.out.println("Enter the marks of your subject 2 ");
//        int marks2 = sc.nextInt();
//        System.out.println("Enter the marks of your subject 3 ");
//        int marks3 = sc.nextInt();
//        float total = (marks1+marks2+marks3)/3.0f;
//        System.out.println("Your overall percentage is " + total);
//        if(marks1 >= 33 && marks2 >= 33 && marks3 >= 33 && total >= 40){
//            System.out.println("You are pass!!!");
//        }
//        else {
//            System.out.println("You are fail");
//        }

        // Question 3.
//        System.out.println("Enter your income in lakhs ");
//        float tax = 0 ;
//        float income = sc.nextFloat();
//        if(tax <= 2.5){
//            tax = tax + 0;
//        }
//        if(income > 2.5f && income <= 5.0f){
//            tax = tax + 0.05f*(income - 2.5f);
//        }
//        else if(income > 5f && income <= 10f){
//            tax = tax + 0.05f * (5.0f-2.f);
//            tax = tax + 0.2f * (income - 5f);
//        }else if(income > 10f){
//            tax = tax + 0.05f * (5.0f-2.f);
//            tax = tax + 0.2f * (10.0f - 5.0f);
//            tax = tax + 0.3f * (income - 5.0f);
//        }
//        System.out.println("The total tax paid by the employee is " + tax);

        // Question 4.
//        System.out.println("Enter the digit for the day");
//        int digit = sc.nextInt();
//        switch (digit) {
//            case 1 -> System.out.println("It is Monday");
//            case 2 -> System.out.println("It is Tuesday");
//            case 3 -> System.out.println("It is Wednesday");
//            case 4 -> System.out.println("It is Thursday");
//            case 5 -> System.out.println("It is Friday");
//            case 6 -> System.out.println("It is Saturday");
//            case 7 -> System.out.println("It is Sunday");
//        }

        // Question 5.
//        System.out.println("Enter the year you want to check whether the year is leap year or not");
//        int year = sc.nextInt();
//        if(year % 4 == 0 || year % 100 = 0 && year % 400 == 0){



            // Question 6.
            System.out.println("Enter the name of the website");
            String name = sc.nextLine();
            if(name.contains(".com")) {
                System.out.println("Commercial Website");
            }
            else if(name.contains(".org")){
                System.out.println("Organisation Website");
            }
            else if(name.contains(".in")){
                System.out.println("Indian Website");

        }
    }
}
