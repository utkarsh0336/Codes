package com.college;
class Box{
    double w,h,d;
    public Box(double width,double height,double depth){
       w = width;
       h = height;
       d = depth;
    }
   public double volume(){
    return(w*h*d);
    }
}
public class lab4q1 {
    public static void main(String[] args) {
        Box B = new Box(4,5,6);
        System.out.println("The volume of the box is " + B.volume());

    }
}

