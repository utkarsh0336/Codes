package com.college;
class Account{
    double iniamt = 0;
    double deposit = 0;
    double withdraw = 0;
    Account(){
        System.out.println("It is executed under first constructor");
        String accname = "Utkarsh Sahay";
        int accnumber = 500301094;
        iniamt = 1000000d;
        System.out.println(accname);
        System.out.println(accnumber);
        System.out.println(iniamt);
    }
    Account(String accname){
        System.out.println("It is executed under second constructor(parameterised)");
        int accnumber = 500301094;
        String address = "Shiv Shankar Path Mithanpura Muzaffarpur";
        String acctype = "Current A/C";
        System.out.println(accname);
        System.out.println(accnumber);
        System.out.println(address);
        System.out.println(acctype);
    }
    public double getBalance(){
        return this.iniamt;
    }
    public void deposit(double d){
        this.deposit = d;
    }
    public double getDeposit(){
        return deposit;
    }
    public void WithDraw(double w){
        this.withdraw = w;
    }
    public double getWithdraw(){
        return withdraw;
    }
}
public class Lab6Q1 {
    public static void main(String[] args) {
        Account ac1 = new Account();
        System.out.println("The account Balance is "+ac1.getBalance());
        System.out.println();
        System.out.println();
        Account ac2 = new Account("Utkarsh Sahay");
        ac1.deposit(2500);
        System.out.println("The amount deposited is " + ac1.getDeposit());
        ac1.WithDraw(1500);
        System.out.println("The amount withdrawn is " + ac1.getWithdraw());



    }
}
