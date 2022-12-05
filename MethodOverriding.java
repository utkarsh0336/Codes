package com.company;

class A{
    public int a;
    public int Harry(){
        return 4;
    }
    public void meth2(){
        System.out.println("I am method 2 of Class A");
    }
}
class B extends A{
    public void meth3(){
        System.out.println("I am method 3 of Class B");

    }
    public void meth2(){
        System.out.println("I am method 2 of Class B");

    }

}
public class MethodOverriding {
    public static void main(String[] args) {
        A a = new A();
        a.meth2();

        B b = new B();
        b.meth2();
    }
}
