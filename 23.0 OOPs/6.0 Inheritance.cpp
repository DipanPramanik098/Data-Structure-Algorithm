// 3rd row of chart -> We can do modifications to verify all rows
#include<iostream>
using namespace std;
class Animal{
    // Parent Class / Base class
    private:
        int age;
    public:
        void eat(){
            cout<<"Eating"<<endl;
        }
        void setAge(int age){
            this->age = age;
        }
        void getAge(){
            cout<<"Age = "<<age;
        }
};
class Dog:public Animal{ // Child Class / Derived class
   
};
int main(){
    Dog d1;
    d1.eat(); // Wont work
    // d1.age; // Wont work here 
    d1.setAge(123);
    d1.getAge();
    return 0;
}