package com.college;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

// Code to create a new File
public class Lab10Q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int count = 0,j = 0;
        File myFile = new File("Lab10Q1.txt");
        try {
            myFile.createNewFile();
        } catch (IOException e) {
            System.out.println("Unable to create this file");
            e.printStackTrace();
        }
        // Code to write to a file
        try {
            FileWriter fileWriter = new FileWriter("Lab10Q1.txt");
            fileWriter.write("This is our first file in java course\n Okay now Bye");
            fileWriter.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
        // Reading a file
        System.out.println("Enter the character you want the repetition of ");
        String rep = sc.nextLine();
        try {
            Scanner scf = new Scanner(myFile);
            while (scf.hasNextLine()){
                String line = scf.nextLine();
                System.out.println(line);
                while(j!=line.length()){
                    count++;
                    j++;
                }
            }

            sc.close();
            System.out.println("The repetition of i is " + count);
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }

    }
}