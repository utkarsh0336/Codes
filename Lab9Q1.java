package com.college;
import java.util.Scanner;
public class Lab9Q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name[] = new String[10];
        System.out.println("Enter the name of Students");
        try {
            for (int i = 0; i < 11; i++) {
                name[i] = sc.nextLine();
            }
        }
        catch (ArrayIndexOutOfBoundsException e){
            System.out.println("The Array is Full,you cannot enter the name " + e);
        }
        try{
            System.out.println("Enter the position of the student in the array");
            int n = sc.nextInt();
            System.out.println(name[n-1]);
        }
        catch(ArrayIndexOutOfBoundsException e1){
            System.out.println("You have entered the wrong index to access");
        }
    }
}
