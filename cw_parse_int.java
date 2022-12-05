package com.college;
import java.util.Scanner;
public class cw_parse_int {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter any sentence");
        String s[] = new String[2];
        for(int k = 0;k<s.length;k++){
            s[k] = sc.nextLine();
        }
        System.out.println("The reverse sentence is ");
        String rev[] = new String[s.length];
        int i = 0;
        while(s[i] != " ") i++;

        for(int j = i;j>=0;j--){
            System.out.print(rev[j] + " ");
        }

        }



}
