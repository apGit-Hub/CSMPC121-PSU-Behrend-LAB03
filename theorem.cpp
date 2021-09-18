// theorem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter the length of side a: ";
    cin >> a;
    cout << "Enter the length of side b: ";
    cin >> b;
    c = pow(pow(a, 2) + pow(b, 2), 0.5);
    cout << "Side a: " << setw(10) << setprecision(2) << fixed << a;
    cout << "\nSide b: " << setw(10) << setprecision(2) << fixed << b;
    cout << "\nSide c: " << setw(10) << setprecision(2) << fixed << c;

}
/* 
Enter the length of side a: 3

Enter the length of side b: 4

Side a:       3.00

Side b:       4.00

Side c:       5.00


*/ 

