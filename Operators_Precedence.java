package com.company;

public class Operators_Precedence {
    public static void main(String[] args) {
        int a = 6*5-34/2;
        /*
        Highest precedence goes to * and /. They are then evaluated on the basis
        of left to right associativity
           =30-34/2
           =30-17
           =13
         */
        int b = 60/5-34*2;
        /*
             =12-34*2
             =12-68
             =-56
         */
//        System.out.println(a);
//        System.out.println(b);
        // Precedence and Associativity
        // Quick Quiz
            int x = 4;
            int y = 2;
          int k = x*y/2;
        System.out.println(k);

//          int k = (b*b-4*a*c)/(2*a);

          int v = 3;
          int u = 2;
//          int k = v*v-u*u;

            int d = 2;
//          int k = a*b-d;
    }
}
