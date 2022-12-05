package com.company;
import java.util.Scanner;
class Library{
    String availarr[] = {"RD Sharma", "Chakrobarty", "H.K Dass", "Reema Thareja", "Floyd's"};
    String issuedarr[];
        Scanner sc = new Scanner(System.in);
    public void addBook(){
        System.out.println("How many books you want to add");
        int n = sc.nextInt();
        for(int i = 0;i<n;i++){
            System.out.println("Enter the name of book " + i);
            availarr[i] = sc.nextLine();
        }
    }
    public void issueBooks(){
        System.out.println("How many books you want to get issued");
        int issue = sc.nextInt();
        for(int i = 0;i<issue;i++){
            System.out.println("Enter the name of book " + i+1);
            issuedarr[i] = sc.nextLine();
        }


    }

public void returnBook(){
        System.out.println("Enter the book name that you want to return");
        String rbs = sc.nextLine();
    }
    public void showAvailableBooks(){
        System.out.println("The books that are available in the library are as follows");
        for(int i = 0;i<5;i++){
            System.out.println(availarr[i]);
        }
    }
}
public class libraray {
    public static void main(String[] args) {
        Library lib = new Library();
        lib.showAvailableBooks();
        lib.addBook();

    }
}
