package com.college;
import java.util.Scanner;
//import java.util.Arrays;
public class Lab_Assign_2_Q2 {
    public static int elem(int [] arr,int n){
        int element = 0;
      int maxcount = 0;
     for(int i = 0;i<n;i++){
         int count = 0 ;
         for(int j = 0;j<n;j++){
             if(arr[i] == arr[j]){
                 count++;
             }
         }
         if(count>maxcount){
             maxcount = count;
             element = arr[i];
         }

     }
     return element;
    }
    public static void main(String[] args) {
        int size, count = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array");
        size = sc.nextInt();
        int[] arr = new int[size];
        for (int i = 0; i < size; i++) {
            System.out.println("Enter the element " + (i + 1));
            arr[i] = sc.nextInt();
        }
        System.out.println("The array is ");
        for (int i = 0; i < size; i++) {
            System.out.print(arr[i]);
            System.out.print("\t");
        }
        System.out.println("\n");
        System.out.println("The most frequent element is " + elem(arr,size));
    }
}
