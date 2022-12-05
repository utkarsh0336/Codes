package com.company;
class MyThread1 extends Thread{
    int i = 0;

    public void run(){
        while(i<40000){
            System.out.println("My Thread1 is running");
            System.out.println("I am cooking Chicken");
        }
        i++;
        }
    }



class MyThread2 extends Thread{
    int i = 0;
        public void run(){
            while(i<40000){
            System.out.println("My Thread2 is running");
            System.out.println("I am bursting Crackers");
        }
            i++;
    }
}
public class Multithreading {
    public static void main(String[] args) {
        MyThread1 t1 = new MyThread1();
        MyThread2 t2 = new MyThread2();
        t1.start();
        t2.start();
    }
}
