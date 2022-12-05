package com.college;

public class Prog1 {
    public static void main(String[] args) {
        System.out.println("Enter the arguments in command line that you want to display");
        int size = args.length;
        System.out.println("The arguments you entered are given below");
        for(int i = 0 ; i < size ; i++){
            System.out.println(args[i]);
        }
    }
}
