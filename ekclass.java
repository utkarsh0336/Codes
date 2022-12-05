package com.company;
class Class {
    int a;

    Class(int a) {
        this.a = a;

    }

    public int getA() {
        return a;
    }

    public int returnone() {
        return 1;
    }

    class DoClass extends Class {
        DoClass(int c) {
            super(c);
            System.out.println("Main ek constructor hoon");
        }
    }
}

public class ekclass {
    public static void main(String[] args) {
        Class e = new Class(65);
        System.out.println(e.getA());
//        DoClass d = new DoClass(5);
        }
    }

