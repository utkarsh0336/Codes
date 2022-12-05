package com.college;
interface Student1{
    void Display_Grade();
    void Attendance();
}
class PG_Students implements Student1 {
    public void Display_Grade() {
        System.out.println("Grade is descent");
    }

    public void Attendance() {
        System.out.println("Attendance can be improved");
    }
}
    class UG_Students implements Student1{
    public void Display_Grade(){
        System.out.println("Grade is descent");
    }
    public void Attendance(){
        System.out.println("Attendance is also good");
    }
}
public class Lab8Q2 {
    public static void main(String[] args) {
        Student1 SP = new PG_Students();
        SP.Display_Grade();
        SP.Attendance();
        Student1 SU = new UG_Students();
        SU.Display_Grade();
        SU.Attendance();
//        PG_Students P = new PG_Students();
//        P.Display_Grade();
//        P.Attendance();
//        UG_Students U = new UG_Students();
//        U.Display_Grade();
//        U.Attendance();
    }
}

