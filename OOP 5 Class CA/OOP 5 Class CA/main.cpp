//
//  main.cpp
//  OOP 5 Class CA
//
//  Created by Divyansh Rastogi on 26/08/19.
//  Copyright © 2019 Divyansh Rastogi. All rights reserved.
//

#include <iostream>
#include <ctype.h>
using namespace std;
class CAccount
{
    long int ano;
    float bal;

public :
    CAccount ()
    {
        cout << "\nEnter the A/c No. : ";
        cin >> ano;
        cout << "\nEnter the balance amount : Rs.";
        cin >> bal;
    }
    void inputTransaction ()
    {
        char ch,choice ;
        float amt;
        do
        {
            cout << "\n Enter the choice (W->WithdrawL,D->eposit) : ";
            cin >> ch;
            switch (ch)
            {
                case 'W' :
                    cout << "\n Enter the amount to be withdrawn : ";
                    cin >> amt;
                    if ((bal-amt)>3000)
                    {
                        bal-= amt;
                        cout << "\nAmount Debited Successfully...!!!\n New Balance = Rs. " << bal;
                    }
                    else cout << "\n Insufficient Balance...!!!";
                    break;
                case 'D' :
                    cout << "\n Enter the amount to be deposited : ";
                    cin >> amt;
                    bal+= amt;
                    cout << "\nAmount Credited Successfully...!!!\n New Balance = Rs. " << bal;
                    break;
                default :
                    cout << "\nError..!! Invalid Choice ";
                    
            }
            cout << "\nWant to Continue ?? (Y->Yes/N-No)";
            cin >> choice ;
        } while (toupper(choice)=='Y');
        
    }
    void printBalance ()
    {
        cout << "\n A/c No. : " << ano << "\n Balance Amount = Rs. " << bal;
    }
    
};

int main(int argc, const char * argv[]) {
    // insert code here...
   // std::cout << "Hello, World!\n";
    CAccount acc;
    int ch;
    while (1)
    {
        cout << "\n\nPress    For\n"
             << "1        Transaction\n"
             << "2        View Details\n";
        cin >> ch;
        switch (ch)
        {
            case 1 :
                acc.inputTransaction();
                break;
            case 2 :
                acc.printBalance();
                break;
                
            case 3 :
                cout << "\nExitting...";
                return 0;
            default :
                cout << "\nError...!!! Invalid Choice..!!";
        }
        
    }
        
    
    return 0;
}
