package com.college;
import java.util.Random;
abstract class Compartment{
     abstract void notice();
}
 class FirstClass extends Compartment {
    @Override
    void notice() {
        System.out.println("This Compartment will have AC Coaches");
    }
}
     class Ladies extends Compartment {
        @Override
        void notice() {
            System.out.println("This Compartment will be only used by Ladies");
        }
    }
         class General extends Compartment {
            @Override
            void notice() {
                System.out.println("General Coaches should only have 100 passengers");
            }
        }
             class Luggage extends Compartment {
                @Override
                void notice() {
                    System.out.println("Luggage should only have 25 kgs");
                }
            }
public class Lab8Q1 {  // class TestCompartment
    public static void main(String[] args) {
       Compartment Com[] = new Compartment[10];
        Random rand = new Random();
        for(int i = 0;i<10;i++) {
            int num = rand.nextInt(1,5);
            if (num == 1) {
                Com[i] = new FirstClass();
            } else if (num == 2) {
                Com[i] = new Ladies();
            } else if (num == 3) {
                Com[i] = new General();
            } else if (num == 4) {
                 Com[i] = new Luggage();
            }
            Com[i].notice();
        }
    }
}
