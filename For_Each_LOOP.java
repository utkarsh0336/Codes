package com.company;

public class For_Each_LOOP {
    public static void main(String[] args) {

//        float [] marks = {90.1f,87.3f,89.9f,96.6f,84.2f};
//        String [] students = {"Utkarsh", "Harry", "Abhiraj", "Shubham"};
//        System.out.println(marks[0]);
//        System.out.println(marks[1]);
//        System.out.println(students[0]);
//        System.out.println(students[1]);
        int [] marks = {90,87,89,96,84};
        System.out.println(marks.length);
        // Displaying the Array (Naive way)
//        System.out.println(marks[0]);
//        System.out.println(marks[1]);
//        System.out.println(marks[2]);
//        System.out.println(marks[3]);
//        System.out.println(marks[4]);

        // Efficient way of displaying the elements of the array(Using Loop)
//        System.out.println("Printing using for loop");
//        for(int i = 0; i<marks.length;i++){
//            System.out.println(marks[i]);
//        }
        // Quick Quiz
        System.out.println("The array in reverse order");
        for(int i = marks.length-1;i>=0;i--){
            System.out.println(marks[i]);
        }
        // Displaying  the array for each loop
        System.out.println("Displaying array using for-each loop");
        for(int element: marks){
            System.out.println(element);
        }
    }
}
