package com.college;
import java.util.Scanner;
class Line{
    Scanner sc = new Scanner(System.in);
    int length = sc.nextInt();
    void display(){
        System.out.println("The length of the line is " + length);
    }
}
class Rectangle1 extends Line{
    int breadth = sc.nextInt();
    void display(){
        System.out.println("The breadth of the Rectangle is " + breadth);
        System.out.println("The area of the rectangle is " + length*breadth);
    }
}
class Cuboid extends Rectangle1{
    int height = sc.nextInt();
    void display(){
        System.out.println("The height of the Rectangle is " + height);
        System.out.println("The volume of the cuboid is " + (length*breadth*height));
    }
}

public class LRC_Inheritance {
    public static void main(String[] args) {
    Line l = new Line();
    l.display();
    Rectangle1 r = new Rectangle1();
    r.display();
    Cuboid c = new Cuboid();
    c.display();
    }
}
