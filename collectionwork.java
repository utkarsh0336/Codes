package com.college;
import java.util.Stack;
import java.util.ArrayList;
import java.util.TreeSet;
public class collectionwork {
    public static void main(String[] args) {

        // ArrayList application
//        ArrayList<String>s = new ArrayList<String>();
//        s.add(0,"Birla");
//        s.add(1,"Institute");
//        s.add(2,"Of");
//        s.add(3,"Technology");
//        System.out.println(s.get(3));
//       s.clear();
//        System.out.println(s);
//        System.out.println(s.size());

        // TreeSet application
//        TreeSet<String> t = new TreeSet<String>();
//        t.add("Utkarsh");
//        t.add("Sahay");
//        t.add("Ajay");
//        t.add("Sahay");
//        System.out.println(t);
//        boolean b = t.contains("Anjana");
//        System.out.println(b);
//        boolean b1 = t.contains("Utkarsh");
//        System.out.println(b1);
//        System.out.println(t.first());
//        System.out.println(t.last());

//         Stack Application
        Stack<String> S = new Stack<String>();
        S.push("Birla");
        S.push("Institute");
        S.push("Of");
        S.push("Technology");
        System.out.println(S);
        S.pop();
        S.pop();
        S.pop();
        S.pop();



    }
}
