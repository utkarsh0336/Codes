import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
//import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;

class MouseListenerSample extends Frame implements MouseListener{
    TextField tf;
    MouseListenerSample(){
        tf = new TextField();
        tf.setBounds(60,50,170,20);
        add(tf);
        Button b = new Button("Click");
        b.setBounds(100,200,80,30);
        addMouseListener(this);
        add(tf);
        add(b);
        setSize(300,300);
        setLayout(null);
        setVisible(true);
    }
    public void mouseClicked(MouseEvent e){
        tf.setText("Clicked");
    } public void mouseEntered(MouseEvent e){
        tf.setText("Mouse Entered");
    } public void mouseExited(MouseEvent e){
        tf.setText("Mouse Exited");
    } public void mousePressed(MouseEvent e){
        tf.setText("Mouse Pressed");
    } public void mouseReleased(MouseEvent e){
        tf.setText("Mouse Released");
    }
}
public class MouseEvent{
    public static void main(String[] args) {
        new MouseListenerSample();
    }
}
