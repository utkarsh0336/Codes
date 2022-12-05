package com.company;

public class Operators_Ch_2 {
    public static void main(String[] args) {
        int a = 4;   // 1. Assignment Operators
        int c = 6 % a;   // modulo Operator
//        4.8 % 1.1 --> Returns Decimal Remainder while using Modulo Operator
        int b = 9;   // 2. Arithmetic Operator
         b *= 3;
        System.out.println(b);
        System.out.println(6 == 8);
        System.out.println(64 > 8);  // 3. Comparison Operator
        System.out.println(64 > 5 && 64 > 88);   // 4. Logical Operator  (AND)
        System.out.println(64 > 5 || 64 > 88);   // Logical Operator  (OR)
        System.out.println(2 & 3);  // 5. Bitwise Operator
        // Example below
//        10
//        11
//    ------------
//        10


    }
}
