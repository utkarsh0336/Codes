package com.college;
import java.util.Scanner;
public class lab3_q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the length of the array");
        int l = sc.nextInt();
        System.out.println("Enter the breadth of the array");
        int b = sc.nextInt();
        System.out.println("Enter the height of the array");
        int h = sc.nextInt();
        int arr[][][] = new int[l][b][h];
        System.out.println("Enter the elements");
        for(int i = 0;i<l;i++){
            for(int j = 0;j<b;j++){
                for(int k = 0;k<h;k++){
                    int num = arr[i][j][k];
                }
            }
        }

    }
}
