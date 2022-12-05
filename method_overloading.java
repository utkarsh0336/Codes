package com.company;

public class method_overloading {
    static void foo(){
        System.out.println("Good Morning Bro!");
    }
    static void foo(int a){
        System.out.println("Good Morning " + a + " Bro!!");
    }
    static void foo(int a,int b){
        System.out.println("Good Morning " + a + " Bro!!");
        System.out.println("Good Morning " + b + " Bro!!");
    }
    /*
    static int foo(int a,int b){                   // We can't do this.
        System.out.println("Good Morning " + a + " Bro!!");
        System.out.println("Good Morning " + b + " Bro!!");
        return 3;
    }

     */
    static void change1(int a){
        a = 98;
    }
    static void change2(int [] arr){
        arr[0] = 98;
    }
    static void telljoke(){
        System.out.println("I invented a new word!\n" + "Plagiarism!");
    }
    public static void main(String[] args) {
//     telljoke();
        // Case 1: Changing the integer
//        int x = 45;
//        change1(x);
//        System.out.println("The value of X after running change is " + x);

// Case 2: Changing the array
//        int [] marks = {52,73,77,89,98,94};
//        int x = 45;
//        change2(marks);
//        System.out.println("The value of X after running change is " + marks[0]);

//        Method Overloading
        foo();
        foo(3000);
        foo(3000,4000);
        // Arguments are actual !!

    }
}
