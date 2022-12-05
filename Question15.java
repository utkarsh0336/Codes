/*
In this we have to display the message that is  Juice Ready
                                                Have a Nice Drink

 */
interface Juicy{
void squeeze();
void drink();
}
class Fruit1 implements Juicy{
   public void squeeze(){
        System.out.println("Juice Ready");
    }
    public void drink(){
        System.out.println("Have a Nice Drink");
    }
}
class Lunch extends Fruit1{
    public void Beverage(){
        squeeze();
        drink();
    }
}
public class Question15 {
    public static void main(String[] args) {
    Lunch L = new Lunch();
    L.Beverage();
    }
}
