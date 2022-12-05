package com.college;
class Fruit{
    String taste = "Sweet";
    String name = "Mango";
    String size;
    public void eat(){
        System.out.println("The name of the fruit is " + this.name);
        System.out.println("The taste of the " + this.name + " is " + this.taste);
    }
}
class Apple extends Fruit{
    String name = "Apple";
    String taste = "Sweet";
    @Override
    public void eat(){
        System.out.println("The taste of the " + this.name + " is " + this.taste);

    }
}
class Orange extends Fruit{
    String name = "Orange";
    String taste = "Sour";
    @Override
    public void eat(){
        System.out.println("The taste of the " + this.name + " is " + this.taste);
    }
}
public class Lab6Q2 {
    public static void main(String[] args) {
        Fruit F = new Fruit();
        F.eat();
        Apple A = new Apple();
        A.eat();
        Orange O = new Orange();
        O.eat();
    }
}
