//
//  main.cpp
//  OOP 1 Bank
//
//  Created by Divyansh Rastogi on 19/08/19.
//  Copyright © 2019 Divyansh Rastogi. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class bank_acc
{
private :
    char dep_name [25];
    long acc_no ;
    char acc_type ;
    float bal_amt;
    
public:
    //long ret_acc_no ()
   // { return acc_no ;}
    void input ();
    void dep_amt(float);
    void with_amt(float);
    void disp ();
};

void bank_acc :: input ()
{
    cout << "\n Enter Depositer's Name : ";
    cin >> dep_name ;
    cout << "\n Enter Account No. : ";
    cin >> acc_no;
    cout << "\n Enter Account Type (C/S) : ";
    cin >> acc_type;
    cout << "\n Enter Current account balance (in Rs) : ";
    cin >> bal_amt;
    
}
    
void bank_acc :: dep_amt(float amt)
{
    bal_amt += amt;
}
void bank_acc :: with_amt(float amt)
{
    if (acc_type == 'S')
    {
        if ((bal_amt-amt) > 3000)
            bal_amt-=amt;
        else
            cout << "\n Error...!!! Minimum Balance of Rs. 3000 required in your Savings Account...!!!\n ";
    }
    else if (acc_type == 'C')
    {
        if ((bal_amt-amt) > 5000)
            bal_amt-=amt;
        else
            cout << "\n Error...!!! Minimum Balance of Rs. 5000 required in your Current Account...!!!\n ";
    }
}
void bank_acc :: disp ()
{
    cout << "\n Name : " << dep_name << "\n Balance Amount : Rs. " << bal_amt << endl;
}

int main()
{
    int ch;
    char c;
    float amt;
    bank_acc b;
    b.input();
    cout<<"\t\tBANK OF USICT\n";
    
    do
    {
        
    cout << "\nWhat would you like to do :\n\n"
         << " 1.     Deposit\n"
         << " 2.     Withdraw\n"
         << " 3.     Check your balance\n"
         << " 4.     Exit\n";
    cout << "\n Enter Your Choice : ";
        cin >> ch;
        switch(ch)
        {
            case 1:
                cout << "\n Enter the Amount to be deposited (in Rs.) = ";
                cin >> amt;
                b.dep_amt(amt);
                cout << " \nAmount deposited successfully...!!!";
                break;
                
            case 2:
                cout << " \nEnter the Amount to be withdrawn (in Rs.) = ";
                cin >> amt;
                b.with_amt (amt);
                cout << " \nAmount deposited successfully...!!!";
                break;
                
            case 3 :
                cout << "\n Account Details : ";
                b.disp ();
                break;
            
            case 4 : exit (0);
            
            default :
                cout << "\nError...!!! Invalid Choice";
        }
        cout << "\n Want To Continue ? (Y/N) : ";
        cin >> c;
    }
    while ( c == 'Y' || c == 'y');
        
        
        

    return 0;
}
