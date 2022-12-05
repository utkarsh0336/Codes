package com.college;

import javax.swing.*;
import java.awt.*;

public class MyFrame extends JFrame {
    MyFrame(){
        JFrame frame = new JFrame();  // creates a this
        this.setTitle("Jthis title goes here");  // sets title of the this
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);  // exit out of the application
        this.setResizable(false); // prevent this from being resize
        this.setSize(420,420);  // sets x and y dimensions
        this.setVisible(true);   // make this visible

        ImageIcon image = new ImageIcon("\"C:\\Users\\hp\\Desktop\\Logo.png\"");  // create an image icon
        this.setIconImage(image.getImage());  // change icon of the this
        this.getContentPane().setBackground(new Color(0x36));  // change color of the background

    }
    public static void main(String[] args) {
        new MyFrame();
    }
}
