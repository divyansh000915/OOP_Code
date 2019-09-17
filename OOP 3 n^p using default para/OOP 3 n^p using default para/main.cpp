//
//  main.cpp
//  OOP 3 n^p using default para
//
//  Created by Divyansh Rastogi on 26/08/19.
//  Copyright © 2019 Divyansh Rastogi. All rights reserved.
//

# include <iostream>
# include <ctype.h>
# include <math.h>
using namespace std;
float power (int x, int p=2)
{
    return pow (x,p);
}
int main(int argc, const char * argv[]) {
    // insert code here...
   // std::cout << "Hello, World!\n";
    float n,p=2;
    char ch;
    cout << "\n Enter the base (n) = ";
    cin >> n;
    cout << "\n Want to enter exponent ? (Y->YES/N->NO) : ";
    cin >> ch ;
    if (toupper(ch) == 'Y')
    {
    cout << "\n Enter the exponent (p) = ";
    cin >> p;
    cout << "\n 'n' raised to power 'p' (" << n << '^' << p << ") = " << power (n,p);
    }
    else
        cout << "\n 'n' raised to default power 'p' = 2 (" << n << '^' << p << ") = " << power (n) << endl;
    
    
    return 0;
}
