package com.company;

public class Array {
    public static void main(String[] args) {
        // Classroom of 500 Students --> You have to store the marks of theses 500 Students.
//        You have 2 options
//        1. Create 500 variables
//        2. Use Arrays(recommended)
        /*
        There are 3 main ways to create an array in Java
        1.int [] marks = new int[5];  // Declaration and Memory Allocation
        2.int [] marks;
        marks = new int[5];  // Declaration and then memory allocation
        marks[0] = 29;
        marks[1] = 69;  // Then initialisation
        3.int [] marks = {100,70,95,94,89}  // Declaration,memory allocation and initialisation together.
         */
        int [] marks = new int [5];
        marks[0] = 100;
        marks[1] = 67;
        marks[2] = 70;
        marks[3] = 90;
        marks[4] = 86;
//        marks[5] = 96;  Throws an error
        System.out.println(marks[4]);





    }
}
