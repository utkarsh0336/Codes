package com.college;
import java.util.Scanner;
class Person{
    Scanner sc = new Scanner(System.in);
    String name;
    Person(){
        System.out.println("Enter the age of the person(Teacher/Person)");
        int age = sc.nextInt();
        System.out.println("The age is " + age);
        System.out.println("Enter the name of the person(Teacher/Person)");
        this.name = sc.next();
    }

//    public void setAge(int AGE){
//        age = AGE;
//    }
}
class Student extends Person{
    String NAME;
   Student(){
       System.out.println("Enter the name of the Student");
       this.NAME = sc.next();
   }
//   public int getAge(){
//       return super.age;
//   }
}
class Teacher extends Person{
    int salary;
    String subject;
    Teacher(){
        System.out.println("Enter the Salary of the Teacher");
        this.salary = sc.nextInt();
        System.out.println("Enter the subject He/She teaches");
        this.subject = sc.next();
        System.out.println("The Salary of " + super.name + " is " + salary);
        System.out.println(super.name +" teaches " + subject);
    }

}
class CollegeStudent extends Student{
    int year;
    String major;
    CollegeStudent(){
        System.out.println("Enter the year in which " + super.NAME +" is currently studying");
        this.year = sc.nextInt();
        System.out.println("Enter the major subject " + super.NAME +" is studying");
        this.major = sc.next();
        System.out.println(super.NAME +" is currently studying in " + year + " Year");
        System.out.println(super.NAME + " has  " + major+ " as his/her major subject");
    }
}

public class lab5_q2 {
    public static void main(String[] args) {

//    P.setAge(25);
//        System.out.println("The age is " + S.getAge());
        CollegeStudent c = new CollegeStudent();
        Teacher T = new Teacher();
    }
}
