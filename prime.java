package com.college;

public class prime {
    public static void main(String[] args) {
        System.out.println("The prime numbers from 2 to 100 are");
        int count = 0;
        for(int n = 3;n<=100;n++){
            for(int j = 2;j<=n/2;j++) {
                if (n % j == 0) {
                    count++;
                }
            }
                if(count == 0){
                    System.out.println(n);
                }
            }
        }
    }

