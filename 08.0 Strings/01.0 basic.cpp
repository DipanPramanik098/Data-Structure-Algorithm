#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    string fname = "Dipan";
    string lname = "Pramanik";

    // append;
    cout<<"full name : "<<fname+lname<<endl;

    // length
    cout<<fname.length()<<endl;

    // replace
    string str = "Hello, World!";
    str.replace(7,5,"C++");
    cout<<str<<endl;

    // substring
    cout<<str.substr(0,5)<<endl;

    // escape characters
    cout<<"Hi ! My Name is \"Dipan Pramanik\""<<endl;

    return 0;
}