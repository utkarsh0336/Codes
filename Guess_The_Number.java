package com.company;
import java.util.Random;
import java.util.Scanner;
class Game{
    int inp1,r,guess=0;
    public Game(){
        Random rand = new Random();
         r = rand.nextInt(0,100);
    }
    public void takeInputUser() {
        while (r != inp1) {
            System.out.println("Guess the number between 0 and 100");
            Scanner sc = new Scanner(System.in);
            inp1 = sc.nextInt();
            if(r > inp1){
                System.out.println("Guess the larger number");
            }
            else {
                System.out.println("Guess the smaller number");
            }
            guess++;
        }
    }
    public boolean isCorrect(){
        if(r == inp1) {return true;}
        else  {
            return false;}
    }
    public int NoOfGuesses(){
        System.out.println("You have taken " + guess + " guesses to win the game");
        return guess;
    }
    public void win(){
        if(r == inp1){
            System.out.println("Hurrah!!! YOU WIN THE GAME ");
        }
        else {
            System.out.println("Give it another try");
        }
    }
}
public class Guess_The_Number {
    public static void main(String[] args) {
        Game GTN = new Game();
        System.out.println("Play the game of Guess The Number");
        GTN.takeInputUser();
        GTN.isCorrect();
        GTN.NoOfGuesses();
        GTN.win();

    }
}
