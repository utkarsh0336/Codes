package com.college;
import java.util.Scanner;
public class lab3_q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int row;
        int col;
        int temp = 0;
        System.out.println("Enter the row of the array");
        row = sc.nextInt();
        System.out.println("Enter the column of the array");
        col = sc.nextInt();
        int[][] arr = new int[row][col];
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.println("Enter the element = ");
                arr[i][j] = sc.nextInt();
            }
        }
        System.out.println("The array is ");
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
            for(int b = 0;b<row;b++) {
                int l = Math.floorDiv(arr[b].length, 2);
                for (int i = 0; i < l; i++) {
                    temp = arr[b][i];
                    arr[b][i] = arr[b][col - i - 1];
                    arr[b][col - i - 1] = temp;
                }
            }
        System.out.println("The reverse array is ");
        for(int i = 0;i<row;i++){
            for(int j = 0;j<col;j++){
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }

        }

        }


