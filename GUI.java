package com.college;
import javax.swing.*;
import java.awt.*;

public class GUI {
    public static void main(String[] args) {

/*  2 */        JLabel label = new JLabel();  // create a label
        label.setText("Bro, do you even code Hello My name is Utkarsh Sahay");  // set text of label


/*   1 */       JFrame frame = new JFrame();  // creates a frame
        frame.setTitle("JFrame title goes here");  // sets title of the frame
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);  // exit out of the application
        frame.setResizable(false); // prevent frame from being resize
        frame.setSize(420,420);  // sets x and y dimensions
        frame.setVisible(true);   // make frame visible
        frame.add(label);
        ImageIcon image = new ImageIcon("Logo.png");  // create an image icon
        frame.setIconImage(image.getImage());  // change icon of the frame
        frame.getContentPane().setBackground(new Color(255,255,255));  // change color of the background

    }
}
