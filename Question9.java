/*
 In this we simply have to show the message on the screen that is Drawing Shape
                                                                  Erasing Shape
                                                               
 */
class Shape{
    public  void draw(){
        System.out.println("Drawing Shape");
    }
    public void erase(){
        System.out.println("Erasing Shape");
    }
}
public class Question9 {
    public static void main(String[] args) {
        Shape S = new Shape();
        S.draw();
        S.erase();
    }
}
