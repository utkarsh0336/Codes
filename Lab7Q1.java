package com.college;
import java.util.Scanner;
public class Lab7Q1{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter any sentence");
        String s = sc.nextLine();
        System.out.println("The reverse sentence is ");
        String rev[] = s.split(" ");
        for(int i = rev.length-1;i>=0;i--){
            System.out.print(rev[i] + " ");
        }
    }
}