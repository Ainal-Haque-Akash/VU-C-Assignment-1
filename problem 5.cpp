/* Write a c++ program to implement a class called BankAccount that has private member variables for account
number and balance.include member functions to deposit and withdraw money from the account.*/
#include<iostream>
using namespace std;
class BankAccount
{
private:
    int account_number;
    double balance;

public:
  void set_value()
    {
        cout<<"account number: ";
        cin>>account_number;
        cin.ignore();
        cout<<"balance: ";
        cin>>balance;
        cin.ignore();
    }
    void deposit(double amount)
    {
        if(amount>0)
        {
            balance +=amount;
            cout<<"deposited: "<<amount<<endl;
            cout<<"Total Balance: "<<balance<<endl;
        }
        else
        {
            cout<<"invalid deposit amount"<<endl;
        }
    }
    void withdraw(double amount)
    {
        if(amount>0 && amount<= balance)
        {
            balance-=amount;
            cout<<"withdrawn amount: "<<amount<<endl;
            cout<<"Total Balance: "<<balance<<endl;
        }
        else
        {
            cout<<"Insufficient Balance: "<<endl;
        }
    }
    void display()
    {
        cout<<endl<<"Account Number: "<<account_number<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
int main()
{

    BankAccount account;
    account.set_value();
    int choice;
    double amount;
    do
    {
        cout<<endl<<"MANU"<<endl;
        cout<<"1.Deposit"<<endl;
        cout<<"2.Withdraw"<<endl;
        cout<<"3.Show Account details"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<endl<<"Enter your choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter the deposit amount: ";
            cin>>amount;
            account.deposit(amount);
            break;
        case 2:
            cout<<"Enter the Withdraw amount: ";
            cin>>amount;
            account.withdraw(amount);
            break;
        case 3:
            cout<<"The SHOW Account: ";
            account.display();
            break;
        case 4:
            cout<<"Exit the program ";
            break;
        default:
            cout<<"invalid choice"<<endl;
        }
    }
    while(choice !=4);
    return 0;
}
