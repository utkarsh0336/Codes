package com.college;

import java.util.Scanner;

public class name1 {
    public static void main(String[] args) {
        System.out.println("Enter the name");
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        for(int i = 0; i < name.length(); i++) {
            if (name.charAt(i) == ' ') {
//            int index =
                System.out.println(name.charAt(0) + "." + name.substring(++i, name.length()));
            }

        }

    }
}
