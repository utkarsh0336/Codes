package com.company;

public class Resulting_Data_Type {
    public static void main(String[] args) {
//        byte x = 5;
//        int y = 6;
//        short z = 8;
//        int a = y + z;
//        float b = 6.46f + x;
//        System.out.println(b);
        // Increment and Decrement Operators
           int i = 56;
           int b = i++; //First b is assigned i (58) and then i is incremented.
        int j = 67;
        int c = ++j;   //First j is incremented and then c is assigned j. (68)
        System.out.println(c);
        System.out.println(i++);
        System.out.println(i);
        System.out.println(++i);
        System.out.println(i);

        // Quick Quiz
        int y =7;
        int x = ++y*8;
        System.out.println(x);
        char a = 'B';
        System.out.println(++a);
    }
}
