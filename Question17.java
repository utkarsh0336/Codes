/*
In this we have to display the message that is    java.lang.ArrayIndexOutOfBoundsException
                                                  It is the First Exception 
	
                                                  java.lang.ArrayIndexOutOfBoundsException
                                                  It is the Second Exception 
 */
public class Question17 {
    public static void one() {
        try {
            two();
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println(e);
            System.out.println("It is the First Exception ");
            System.out.println("\t");
        }
        throw new ArrayIndexOutOfBoundsException();
    }
    public static void two() {
        throw new ArrayIndexOutOfBoundsException();
    }
    public static void main(String[] args) {
        try {
            one();
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println(e);
            System.out.println("It is the Second Exception ");
        }
    }
}
