package com.college;
import java.util.Scanner;
public class Reverse_String {
    public static void main(String[] args) {
        char ch;
        String revstr = "";
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the string that you want to reverse");
        String s = sc.nextLine();
        for(int i =0 ;i < s.length();i++){
            ch = s.charAt(i);
            revstr = ch + revstr;
        }
        System.out.println("The reverse of the string is " + revstr);

    }
}
