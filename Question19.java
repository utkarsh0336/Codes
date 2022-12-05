/*
It is the Mouse event shown in the Screenshot
*/
import java.awt.*;
import java.awt.event.*;
class Question19 extends Frame implements ActionListener{
    TextField tf;
    Question19(){

 
        tf=new TextField();
        tf.setBounds(60,50,170,20);
        Button b=new Button("click me");
        b.setBounds(100,120,80,30);

        b.addActionListener(this);//passing current instance  


        add(b);add(tf);
        setSize(300,300);
        setLayout(null);
        setVisible(true);
    }
    public void actionPerformed(ActionEvent e){
        tf.setText("Welcome");
        dispose();
    }
    public static void main(String args[]){
        new Question19();
    }
}  