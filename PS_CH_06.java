package com.company;
import java.util.Scanner;
public class PS_CH_06 {
    static void CreateArray(int [] A,int n){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of thr array");
        n = sc.nextInt();
        for(int i = 0; i<n ; i++){
            System.out.println("Enter the element " + i+1);
            sc.nextInt();
        }
    }
    static void DisplayArray(int [] A,int n){
        System.out.println("The array is ");
        for(int i = 0;i<n;i++){
            System.out.print(A[i] + "\t");
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // Question 1.
//        float [] arr = {1.1f,2.5f,4.1f,5.7f,6.7f};
//        float sum = 0;
//        for(int i = 0; i< arr.length;i++){
//            sum += arr[i];
//        }
//        System.out.println("The sum of the elements of the array is " + sum);
        // Question 2.
        System.out.println("Enter the size of the array");
       int n = sc.nextInt();
        int [] arr = new int[n];
        CreateArray(arr,n);
        DisplayArray(arr,n);

    }
}
