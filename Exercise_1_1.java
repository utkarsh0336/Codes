package com.company;
import java.util.Scanner;
public class Exercise_1_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the marks of the First Subject");
        int sub1 = sc.nextInt();
        System.out.println("Enter the marks of the Second Subject");
        int sub2 = sc.nextInt();
        System.out.println("Enter the marks of the third Subject");
        int sub3 = sc.nextInt();
        System.out.println("Enter the marks of the fourth Subject");
        int sub4 = sc.nextInt();
        System.out.println("Enter the marks of the fifth Subject");
        int sub5 = sc.nextInt();
        float t1 = (sub1 + sub2 + sub3 + sub4 + sub5);
        float t2 = 500f;
        float score = (t1/t2)*100f;
        System.out.print("The total percentage is ");
        System.out.println(score);
    }
}
