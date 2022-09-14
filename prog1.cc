/*
 *       File: prog1.cc
 *       Author: Joe Ash
 *       Date: 09/14/2022
 *       Description: Lab 3 Step 2, fixing the format of the .cc program
 */

// more information on keyword const on pages 95 - 97
// For if else format look at page 77

#include<iostream> 
#include<cstdlib>

using namespace std;

const int INT1 = 15;
const int INT2 = 20; 

int main(){
    cout <<"Sum of " << INT1 <<" and " << INT2 << " is " << INT1 + INT2 << endl;
    cout <<"Product is "<< INT1 * INT2 << endl;

    if (INT1 < INT2) { 
        cout<<INT2 <<" is bigger " << endl;
    }
    else {
        cout << INT1 << "is bigger " << endl; 
    }
    return (EXIT_SUCCESS);
}
