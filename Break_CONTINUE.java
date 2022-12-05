package com.company;

public class Break_CONTINUE {
    public static void main(String[] args) {
        // Break and continue using loops
//        for(int i = 0;i<5;i++){
//            System.out.println(i);
//            System.out.println("Java is Great");
//            if(i == 2){
//                System.out.println("Ending the loop");
//                break;
//            }
//
//        }
//        for(int i = 0;i<50;i++){
//            if(i==2){
//                System.out.println("Ending the loop");
//                continue;
//            }
//            System.out.println(i);
//            System.out.println("Java is Great");
//        }
        int i = 0;
         do{
             i++;
            if (i == 2) {
                System.out.println("Ending the loop");
                continue;
            }
             System.out.println(i);
             System.out.println("Java is Great");
        }while (i < 5);
        System.out.println("Loop ends here");
    }
}
