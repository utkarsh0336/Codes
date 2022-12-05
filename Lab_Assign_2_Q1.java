package com.college;
import java.util.Arrays;
import java.util.Scanner;
public class Lab_Assign_2_Q1 {
    public static void main(String[] args) {
        int size;
        int max1 = 0,max2 = 0;
        int min1 = 0, min2 = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array");
        size = sc.nextInt();
        int [] arr = new int[size];
        for(int i = 0; i<size ; i++){
            System.out.println("Enter the element " + (i+1) );
            arr[i] = sc.nextInt();
        }
        System.out.println("The array is ");
        for(int i = 0; i<size;i++){
            System.out.print(arr[i]);
            System.out.print("\t");
        }
        System.out.println("\n");
          Arrays.sort(arr);
            min1 = arr[0];
            min2 = arr[1];
            max1 = arr[size-2];
            max2 = arr[size-1];
        System.out.println("The first two minimum elements are " + min1 + " and " + min2);
        System.out.println("The first two maximum elements are " + max1 + " and " + max2);











    }
}
