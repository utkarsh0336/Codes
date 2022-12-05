package com.college;
import java.util.Scanner;
public class Lab7Q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the String you want ");
        String st = sc.nextLine();
        System.out.println("Enter the word String");
        String word = sc.next();
        int sLen = st.length();
        int wLen = word.length();
        String fin = "";
        for (int i = 0; i < sLen - wLen + 1; i++) {
            String tmp = st.substring(i, i + wLen);
            if (i > 0 && tmp.equals(word)) {
                fin += st.substring(i - 1, i);
            }
            if (i < sLen - wLen && tmp.equals(word)) {
                fin += st.substring(i + wLen, i + wLen + 1);
            }
        }
        System.out.println(fin);
    }
}


