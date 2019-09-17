//
//  main.cpp
//  OOP 2 Callm By
//
//  Created by Divyansh Rastogi on 19/08/19.
//  Copyright © 2019 Divyansh Rastogi. All rights reserved.
//

#include <iostream>
using namespace std;

void call_by_val (int a);
void call_by_ref (int &a);
void call_by_pointer (int *a);

int main(int argc, const char * argv[]) {
    int x=10;
    int y=10;
    int z=10;
    cout << "\n First Variable X = " << x;
    call_by_val (x);
    cout << "\n X after Call By Value = " << x;
    cout << "\n Second Variable Y = " << y;
    call_by_ref (y);
    cout << "\n Y after Call By Reference = " << y;
    cout << "\n Third Variable Z = " << z;
    call_by_pointer (&z);
    cout << "\n X after Call By Pointer = " << z;
    return 0;
}

void call_by_val (int a)
{
    a = 20;
    cout << "\n Changes In X inside Call By Value Function : X = " << a;
}
void call_by_ref (int &a)
{
    a = 20;
    cout << "\n Changes In X inside Call By Value Function : Y = " << a;
}
void call_by_pointer (int *a)
{
    *a = 20;
    cout << "\n Changes In X inside Call By Value Function : Z = " << *a;
}
