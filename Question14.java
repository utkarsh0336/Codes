/*
In this we have to display the calculation as we can see in the output
 */
abstract class Shape1{
    int a,b;
    abstract void printArea();
}
class Rectangle2 extends Shape{
    int l,b;
    public void setLength(int l){
        this.l = l;
    }
    public int getLength(){
        return l;
    }
    public void setBreadth(int b){
        this.b = b;
    }
    public int getBreadth(){
        return b;
    }
    void printArea(){
        System.out.println("The area of the Rectangle is " + (l*b));
    }
}
class Triangle extends Shape{
    double a,b,c;
    public void setLength1(double a){
        this.a = a;
    }
    public void setLength2(double b){
        this.b = b;
    }
    public void setLength3(double c){
        this.c = c;
    }
    public double getLength1(){
        return a;
    }
    public double getLength2(){
        return b;
    }
    public double getLength3(){
        return c;
    }
    public double calcArea(){
        double s = (a+b+c)/2;
        double area = Math.sqrt(s*(s-a)*(s-b)*(s-c));
        return area;
    }
    void printArea(){
        System.out.println("The area of the Triangle is " + calcArea());
    }
}
class Circle extends Shape{
    double r;
    public void setRadius(double r){
        this.r = r;
    }
    public double getRadius(){
        return r;
    }
    double printArea(){
        return Math.PI*r*r;
    }
}
public class Question14 {
    public static void main(String[] args) {
        Rectangle2 R = new Rectangle2();
        R.setLength(4);
        R.setBreadth(3);
        System.out.println("The length of Rectangle is " + R.getLength());
        System.out.println("The breadth of Rectangle is " + R.getBreadth());
        R.printArea();
        System.out.println("\t");

        Circle C = new Circle();
        C.setRadius(4);
        System.out.println("The radius of Circle is " + C.getRadius());
        System.out.println("The area of the circle is " + C.printArea());;

        System.out.println("\t");
        Triangle T = new Triangle();
        T.setLength1(4);
        T.setLength2(4);
        T.setLength3(4);

        System.out.println("The length of side 1 of Triangle is " + T.getLength1());
        System.out.println("The length of side 2 of Triangle is " + T.getLength2());
        System.out.println("The length of side 3 of Triangle is " + T.getLength3());
        T.printArea();
    }
}
