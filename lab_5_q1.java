package com.college;
class Animal{
    public void fly(){
        System.out.println("Animals cannot fly");
    }
    public void eat(){
        System.out.println("Animal is eating...");
    }
    public void sleep(){
        System.out.println("Animal is sleeping");
    }
}
class Bird extends Animal{
    public void eat(){
        System.out.println("Bird is eating...");
    }
    public void fly(){
        System.out.println("Birds can fly");
    }
    public void sleep(){
        System.out.println("Bird is sleeping...");
    }
}
public class lab_5_q1 {
    public static void main(String[] args) {
     Animal A = new Animal();
     Bird B = new Bird();
     A.eat();
     A.sleep();
     A.fly();
     B.eat();
     B.sleep();
     B.fly();
    }
}
