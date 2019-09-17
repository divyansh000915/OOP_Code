//
//  main.cpp
//  OOP 4 Dynamic Array Sort
//
//  Created by Divyansh Rastogi on 26/08/19.
//  Copyright © 2019 Divyansh Rastogi. All rights reserved.
//

#include <iostream>
//#include <
using namespace std;
void bsort (int a [],int n)
{
    int i,j,temp;
    
    for (i = 0 ; i < n - 1; i++)
    {
        for (j = 0 ; j < n - i - 1; j++)
        {
            if (a[j] > a[j+1]) // Ascending Order
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

}
int main(int argc, const char * argv[]) {
    int n ;
    
    // insert code here...
   // std::cout << "Hello, World!\n";
   // return 0;
    cout << "\n DYNAMIC ARRAY SORT (Ascending Order)"
    << " \n Enter the number of integers to be added into the array : ";
    cin >> n ;
    int*a = new int [n];
    cout << "\Enter the integer to be added in the dynamic array : ";
    for (int i = 0 ; i < n ; ++i)
    cin >> a[i];
    bsort (a,n);
    cout << "\n Entered integers after sorting : \n";
    for (int j = 0; j<n;++j)
    {
        cout << a[j]<< endl;
    }
    delete [] a ;
    a = NULL;
}

