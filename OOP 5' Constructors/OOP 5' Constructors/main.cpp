//
//  main.cpp
//  OOP 5' Constructors
//
//  Created by Divyansh Rastogi on 16/09/19.
//  Copyright © 2019 Divyansh Rastogi. All rights reserved.
//

#include <iostream>
using namespace std;

class X {
    int p,r;
    int *q;
    public :
    X ()
    {
        p = 0;
        r=0;
        q = NULL;
        cout << p << ' ' << r << endl;
    }
    X (int a)
    {
        p = a;
        r=0;
        q = NULL;
        cout << p << ' ' << r << endl;
    }
    X (int a,int b)
    {
        p = a;
        r = b;
        q = NULL;
        cout << p << ' ' << r << endl;
    }
    X (int a, int b, int c)
    {
        p =a;
        //q=b;
        r =  b;
        q = new int ;
        *q = c;
        cout << p << ' ' << r << ' ' << *q << endl;
    }
    
};

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    int a,b,c;
    cin >> a >> b >> c;
    X j ;
    X k (a);
    X l (a,b);
    X n (a,b,c);
    
    return 0;
    
}
