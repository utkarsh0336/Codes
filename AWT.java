package com.college;

import java.awt.*;

public class AWT extends Frame {
    String title;
    public  AWT(String title){
        super(title);
        setSize(200,150);
        setLayout(null);
        setVisible(true);
    }
    public void paint(Graphics g){
        g.drawString("My first Frame",50,50);
    }
    public static void main(String[] args) {
        AWT A= new AWT("My Frame");
        Button b1 = new Button("Click");
        b1.setBounds(30,100,50,30);
        A.add(b1);
        A.setLayout(null);
        A.setVisible(true);

    }
}
