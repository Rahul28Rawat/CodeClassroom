#include<iostream>
using namespace std;

//define a class named bankAccount to represent following members.
class BankAccount{
    public:
        int accountNumber;
        string Depositor;
        string accountType;
        double balance;

        //Q1) create a function to initialize members
        BankAccount(int an, string d, string at, double b){
            accountNumber = an;
            Depositor = d;
            accountType = at;
            balance = b;
        }

        //Q2) Deposit amount
        void DepositAmount( double amount ){
            balance= balance+ amount;
            DisplayBalance();
        }

        //Q3) Withdraw amount
        void WithdrawAmount( double withdrawl ){
            balance=balance-withdrawl;
            DisplayBalance();
        } 

        //Q4) Display balance
        void DisplayBalance(){
            if(balance<2000){
                balance=balance-100;
                cout<<"-----Messege : 100rs has been deducted from your account because you didnt maintain minimum balance---- "<<endl;
            }
            cout<<"Your current balance is : "<<balance<<"rs"<<endl;
        }

        //Q5) everytime we print balance check if balance is less than 2000. 
        //If balance is less than 2000, generate a fine of 100rs.
 
};

int main(){

    BankAccount cumstomer1(123456,"Rahul","Savings",50000.0);
    cumstomer1.WithdrawAmount(49000);


    return 0;
}