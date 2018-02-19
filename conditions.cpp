/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int  a;
    int b;
    cout<<"Give 1st Number";
    cin>> a;
    cout<< "Give 2nd Number";
    cin >> b;
    
   
    if(a > b){
        cout<< "1st is greater than 2nd";
    }
    else if(a == b){
        cout << " 1st is equal to 2nd ";
    }
    else {
        cout << "2nd is greater than 1st";
    }
    

    return 0;
}




