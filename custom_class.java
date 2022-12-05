package com.company;

class Employee{
    int id;
    int salary;
    String name;
    public void PrintDetails(){
        System.out.println("My id is " + id);
        System.out.println("and my name is " + name);
    }
    public int getSalary(){
        return salary;
    }
}

public class custom_class {

    public static void main(String[] args) {
        System.out.println("This is our custom class");
        Employee harry = new Employee();  // Instantiating a new Employee Object.
        Employee john = new Employee();  // Instantiating a new Employee Object.
        // Setting Attributes fo Harry
        harry.id = 12;
        harry.name = "CodeWithHarry";
        harry.salary = 34;

        // Printing the Attributes for John
        john.id = 13;
        john.name = "John Khandelwal";
        john.salary = 12;


//        System.out.println(harry.id);
//        System.out.println(harry.name);

        harry.PrintDetails();
        john.PrintDetails();
        int salary = john.getSalary();
        System.out.println(salary);

    }
}

