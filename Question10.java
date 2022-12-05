/*
In this we simply have to show the message on the screen that is  The name is set as Utkarsh
                                                                  The id is set as 7
                                                                  The name is set as Ankit
                                                                  The id is set as 3
 */
class Employee{
    String name;
    int id;
    Employee(String name,int id){
        this.name = name;
        this.id = id;
        System.out.println("The name is set as " + name);
        System.out.println("The id is set as " + id);
    }
}
public class Question10 {
    public static void main(String[] args) {
        Employee E = new Employee("Utkarsh",007);
        Employee E1 = new Employee("Ankit",003);
    }
}
