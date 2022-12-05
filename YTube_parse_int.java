package com.college;

import java.io.DataInputStream;

public class YTube_parse_int {
    public static void main(String[] args) throws Exception {
        DataInputStream d = new DataInputStream(System.in);
//        int rno = d.readLine(); //Err,can't assign str to integer
        int rno = Integer.parseInt(d.readLine());
        System.out.println("Your Reg.No is:" + rno);


    }
}
