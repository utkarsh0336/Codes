package com.company;

import javax.swing.plaf.basic.BasicEditorPaneUI;

class Base{
    int x;
    public int getX(){
        return x;
    }
    public void setX(int x){
        System.out.println("I am in Base and setting X now");
        this.x = x;
    }
    void printMe(){
        System.out.println("I am a constructor");
    }
}
class Derived extends Base{
    int y;
    public int getY(){
        return y;
    }
    public void setY(int y){
        this.y = y;
    }
}
class Animals {
    String Speak;
    String color;

    public String getSound() {
        System.out.println("The sound of this animal is " + Speak);
        return Speak;
    }

    public void setSound(String Speak) {
        this.Speak = Speak;
    }
}
    class Dog extends Animals{
        public void s(){
            setSound("Bark");
    }
    public String getSound(){
            return Speak;

    }


}
public class Inheritance {
    public static void main(String[] args) {
        // Creating an object of Base Class
        Base b = new Base();
        b.setX(4);
        System.out.println(b.getX());
        // Creating an object of Derived Class
        Derived d = new Derived();
        d.setY(43);
        System.out.println(d.getY());
        Dog d1 = new Dog();
        d1.setSound("Barking...");
        System.out.println(d1.getSound());



    }
}
