package com.college;
class MyException extends Exception{
    int age;
    public MyException(int a){
        age = a;
    }
    public String toString(){
        return "Age entered is not proper";
    }
}
public class Lab9Q2 {
    public static void main(String[] args) {
        String name = args[0];
        try {
            int age = Integer.parseInt(args[1]);
            if(age<18 && age>= 60){
                throw new MyException(age);
            }
        }
            catch (MyException e){
                System.out.println(e);
        }
        }

    }

