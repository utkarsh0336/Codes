/*
It generates 10 random numbers and their squares and cubes
*/
import java.util.Random;
class T extends Thread{
    int x;
    T(int n){
        x = n;
    }
    public void run(){
        int sqr = x*x;
        System.out.println("Square of " + x + " = " + sqr);
    }
}
class V extends Thread{
    int x;
    V(int n){
        x = n;
    }
    public void run(){
        int cub = x*x*x;
        System.out.println("Cube of " + x + " = " + cub);
    }
}
class Number extends Thread{
    public void run(){
        Random rand = new Random();
        for(int i=0;i<10;i++){
            int randomInteger = rand.nextInt(100);
            System.out.println("Random Integer generated : " + randomInteger);
            T t = new T(randomInteger);
            t.start();
            V v = new V(randomInteger);
            v.start();
            try{
                Thread.sleep(1000);
            }
            catch(InterruptedException e){
                System.out.println(e);
            }
        }
    }
}
public class Question21 {
    public static void main(String[] args) {
        Number n = new Number();
        n.start();
    }
}
