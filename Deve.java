package com.college;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
class ButtonEventExample extends Frame implements ActionListener{
    TextField tf;
    ButtonEventExample(){
        tf = new TextField();
        tf.setBounds(60,50,170,20);
        Button b = new Button("Click");
        b.setBounds(100,200,80,30);
        b.addActionListener(this);
        add(tf);
        add(b);
        setSize(300,300);
        setLayout(null);
        setVisible(true);
    }
    public void actionPerformed(ActionEvent e){
        tf.setText("Welcome");
    }
}
public class Deve{
    public static void main(String[] args) {
        new ButtonEventExample();
    }
}
