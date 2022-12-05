package com.company;

public class Relational_Logical_Operators {
    public static void main(String[] args) {
        System.out.println("For Logical AND");
        boolean a = true;
        boolean b = true;
        boolean c = true;
        if(a && b && c){   // Works like AND Gate
            System.out.println("Yes");
        }
        else {
            System.out.println("No");
        } System.out.println("For Logical OR");

        boolean a1 = true;
        boolean b1 = true;
        boolean c1 = false;
        if(a1 || b1 || c1){   // Works like OR Gate
            System.out.println("Yes");
        }
        else {
            System.out.println("No");
        }

        System.out.println("For logical NOT");
        System.out.print("Not(A) is ");
        System.out.println(!a1);
        System.out.print("Not(B) is ");
        System.out.println(!b1);
        System.out.print("Not(C) is ");
        System.out.println(!c1);
    }
}
