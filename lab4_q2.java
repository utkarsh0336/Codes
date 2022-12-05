package com.college;
import java.util.Objects;
import java.util.Scanner;
class Rectangle{
    private double width;
    private double length;
    private double area;
    private String color;
    public void setLength(double len){
        this.length = len;
    }
    public void setWidth(double wth){
        this.width = wth;
    }
    public String setColor(String clr){
        return clr;
    }
    public double area(){
        double area = length*width;
        return area;
    }
}
public class lab4_q2 {
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    Rectangle R1 = new Rectangle();
    Rectangle R2 = new Rectangle();
    // For rectangle 1
    System.out.println("Enter the length of the rectangle 1");
    double l1 = sc.nextDouble();
    System.out.println("Enter the breadth of the rectangle 1");
    double b1 = sc.nextDouble();
    System.out.println("Enter the colour of the rectangle 1");
    String clr1 = sc.next();

    // For rectangle 2
    System.out.println("Enter the length of the rectangle 2");
    double l2 = sc.nextDouble();
    System.out.println("Enter the breadth of the rectangle 2");
    double b2 = sc.nextDouble();
    System.out.println("Enter the colour of the rectangle 2");
    String clr2 = sc.next();

    // For rectangle 1
    R1.setLength(l1);
    R1.setWidth(b1);
    String clrR1 =  R1.setColor(clr1);
    R1.area();

    // For rectangle 2
    R2.setLength(l2);
    R2.setWidth(b2);
    String clrR2 = R2.setColor(clr2);
    R2.area();
    if(R1.area() == R2.area() && clrR1.equals(clrR2)){
            System.out.println("Matching Rectangles");
        }
    else{
        System.out.println("Non Matching Rectangles");
    }
    }
}
