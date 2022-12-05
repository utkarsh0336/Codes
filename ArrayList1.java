package com.college;
import java.util.*;
public class ArrayList1 {
    public static void main(String[] args) {
        ArrayList<Integer> l1 = new ArrayList<>();
        l1.add(2);
        l1.add(3);
        l1.add(67);
        l1.add(21);
        System.out.println(l1);
        System.out.println(l1.get(2));
        System.out.println(l1.size());
        l1.add(1,36);
        System.out.println(l1);

    }
}
