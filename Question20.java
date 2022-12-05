/* It is the Key Event shown in the Screenshot
*/
import java.awt.*;
import java.awt.event.*;
public class Question20 extends Frame implements KeyListener {
    Label l;
    TextArea area;
    
    Question20() {
        
        l = new Label();
        l.setBounds (20, 50, 100, 20);

        area = new TextArea();

        area.setBounds (20, 80, 300, 300);

        area.addKeyListener(this);

        add(l);
        add(area);

        setSize (400, 400);
        setLayout (null);
        setVisible (true);
    }

    public void keyPressed (KeyEvent e) {
        l.setText ("Key Pressed");
    }
    public void keyReleased (KeyEvent e) {
        l.setText ("Key Released");
    }

    public void keyTyped (KeyEvent e) {
        l.setText ("Key Typed");
        dispose();
    }

    public static void main(String[] args) {
        new Question20();
    }
}
