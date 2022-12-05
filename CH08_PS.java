package com.company;
import java.util.Scanner;
class Employee1{
    int salary;
    String name;

    public int getSalary(){
        return salary;
    }
    public String getName(){
        return name;
    }
    public String setName(String name1){
        name = name1;
        return name1;
    }
}
class cellphone{
    public void Ring(){
        System.out.println("ringing....");
    }
    public void Vibrate(){
        System.out.println("vibrating....");
    }

}
class Square{
    int side1;
   public int getSide(int side){
       return side;
    }
    public void setSide(int side){
       side1 = side;
    }
    public double area(int side1){
        return side1*side1;
    }
    public double perimeter(int side1){
        return (4*side1);
    }
}
class Rectangle{
    int len;
    int br;
   public int getlength(int len){
       return len;
    }
    public void setlength(int len){
       this.len = len;
    }
    public int getbreadth(int br){
       this.br = br;
       return br;
    }
    public int area(int len,int br){
        return len*br;
    }
    public int perimeter(int len,int br){
        return 2*(len+br);
    }
}
public class CH08_PS {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // Question 1
        Employee1 Utkarsh = new Employee1();
        Utkarsh.name = "Coder";
        Utkarsh.salary = 100;
        System.out.println("The name of Utkarsh is " +  Utkarsh.getName());
        System.out.println("The salary of Utkarsh is " +  Utkarsh.getSalary());
        System.out.println("The new name of Utkarsh is " +   Utkarsh.setName("Harry"));

        // Question 2
        cellphone iPhone14 = new cellphone();
        iPhone14.Ring();
        iPhone14.Vibrate();

        // Question 3
        Square S1 = new Square();
        System.out.println("Enter the side of the square");
        int s = sc.nextInt();
        S1.setSide(s);
        System.out.println("The area of the square is " + S1.area(s));
        System.out.println("The perimeter of the square is " + S1.perimeter(s));

        // Question 4
        Rectangle R = new Rectangle();
        System.out.println("Enter the length of the rectangle");
        int l = sc.nextInt();
        R.getlength(l);
        System.out.println("Enter the new length of the rectangle");
        int nl = sc.nextInt();
        R.setlength(nl);
        System.out.println("Enter the breadth of the rectangle");
        int b = sc.nextInt();
        R.getlength(b);
        System.out.println("The perimeter of the rectangle is " + R.perimeter(l,b));
        System.out.println("The area of the rectangle is " + R.area(l,b));
    }
}
