//#include <bits/stdc++>
// Program to compute and display the greater of two numbers in c plus plus
#include <iostream>
using namespace std;

int main ()
{
    cout << "Hello Factory \n";
    
    int i, j, k;
    
    cout << "Enter any number \n";
    cin >> i;
    cout << "Enter another number \n";
    cin >> j;
    k = max (i, j);
    cout << " The greater number is \n" << k;
    
    return 0;
}
