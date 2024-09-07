#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void speak(){
        cout<<"Speaking..."<<endl;
    }
};
class Dog : public Animal{
    public:
    void speak(){
        cout<<"Barking..."<<endl;
    }
};
int main(){
    // Animal a;
    // a.speak();
    // Dog d;
    // d.speak();

    Animal* a = new Animal();
    a->speak();

    Dog * d = new Dog();
    d->speak();
// NOTE: upcasting
    Animal * a2 = new Dog();
    a2->speak();
    return 0;


    Dog *d2 = (Dog*)new Animal();
    d2->speak();
}