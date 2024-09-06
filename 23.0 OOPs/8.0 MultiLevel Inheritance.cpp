#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class Car{
    public:
    int age;
    int weight;
    string name;

    void speedUp(){
        cout<< " Speeding Up "<<endl;
    }
};
class Scorpio: public Car{

};
class Thar: public Car{

};

int main(){
    Scorpio s11;
    s11.speedUp();

    Thar t;
    t.speedUp(); 
    return 0;
}