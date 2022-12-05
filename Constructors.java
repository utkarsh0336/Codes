package com.company;
class MyMainEmployee{
        private int id;
        private String name;

//        public MyMainEmployee(){
//            id = 45;
//            name = "Your-Name-Here";
//        }
        public MyMainEmployee(String myName, int myId){
            id = myId;
            name = myName;
        }

        public String getName(){
            return name;
        }
        public void setName(String n){
            this.name = n;
        }
        public int getId(){
            return id;
        } public void setId(int i){
            this.id = i;
        }
    }
public class Constructors {
    public static void main(String[] args) {

        MyMainEmployee harry = new MyMainEmployee("Utkarsh",45);
//        harry.setId(34);
        System.out.println(harry.getName());
        System.out.println(harry.getId());



    }
}
