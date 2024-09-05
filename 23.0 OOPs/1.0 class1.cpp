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
    // cout<<"Sizof empty class is "<<sizeof(Animal)<<endl;  

    // TODO: Static memory allocation

    Animal palash;
    palash.name = "Hunu";
    palash.age = 20;
    cout<<"palash name : "<<palash.name<<endl;
    cout<<"palash age : "<<palash.age<<endl;


    palash.eat();
    palash.sleep();
    
    palash.setWeight(100);
    cout<<palash.getWeight()<<endl;
    // TODO: Dynamic memory allocation
    return 0;
}