#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class Animal{
    public:
    // NOTE: states/properties
    int age;
    string name;
    private:
    int weight;

    public:
    // Note: Behaviour
    void eat(){
        cout<<"eating"<<endl;
    }

    void sleep(){
        cout<<"sleeping"<<endl;
    }
    

    int getWeight(){
        return weight;
    }
   void setWeight(int w){
        weight = w;
    }
}; 
int main(){
    
    Animal * animal = new Animal;
    (*animal).age = 177;
    (*animal).name = "Elephant";

    cout<<animal->age;
    cout<<animal->name;
    return 0;
}