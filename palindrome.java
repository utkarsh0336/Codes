package com.college;
import java.util.Scanner;
public class palindrome {
    public static void main(String[] args) {
        int r, n, sum = 0,temp;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number you want to check whether it is a palindrome or not");
        int num = sc.nextInt();
        temp = num;
        while (num > 0) {
            r = num % 10;  // Getting the remainder
            sum = sum * 10 + r;
            num /= 10;
        }
        if (temp == sum) {
            System.out.println("The number is palindrome");
        }
            else{
                System.out.println("The number is not palindrome");
            }
        }
    }

