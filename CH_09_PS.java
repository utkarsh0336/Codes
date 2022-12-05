package com.company;
import java.util.Scanner;
class Sphere{
    private int radius;
    public int getRadius(){
        return radius;
    }
    public void setRadius(int r){
        this.radius = r;
    }

}
class Cylinder{
    public Cylinder(){

    }
    public Cylinder(int length,int breadth){

    }
    int r,h;
    public int getRadius(){
        return r;
    }
    public void setRadius(int radius){
        this.r = radius;
    }
    public int getHeight(){
        return h;
    }
    public void setHeight(int height){
        this.h = height;
    }
    public double area(){
         return(2*Math.PI*r*h);
    }
    public double volume(){
        return Math.PI*r*r*h;
    }
}
public class CH_09_PS {
    public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in);
//        Cylinder c = new Cylinder();
//        System.out.println("Enter the radius of the cylinder ");
//        int r = sc.nextInt();
//        c.setRadius(r);
//        System.out.println("The radius of the cylinder is "+ c.getRadius());
//        System.out.println("Enter the height of the cylinder ");
//        int h = sc.nextInt();
//        c.setHeight(h);
//        System.out.println("The height of the cylinder is "+ c.getHeight());
//        System.out.println("The surface area of the cylinder is " + c.area());
//        System.out.println("The volume of the cylinder is " + c.volume());
        Cylinder c1  =new Cylinder(4,5);
        Sphere S = new Sphere();
        S.setRadius(5);
        System.out.println("The radius of the sphere is " + S.getRadius());
    }
}
