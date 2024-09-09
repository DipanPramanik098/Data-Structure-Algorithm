#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>

class Bird{
    public:
    virtual void eat() = 0;
    virtual void fly() = 0;
    // NOTE:classes thet inherits this class has to implement pure virtual function
};

class Sparrow : public Bird{
    public:
    void eat(){
        std::cout<<"Sparrow is eating";
    }
    void fly(){
        std::cout<<"Sparrow is flying";
    }
};
class Eagle : public Bird{
    public:
    void eat(){
        std::cout<<"Eagle is eating";
    }
    void fly(){
        std::cout<<"Eagle is flying";
    }
};



#endif // BIRD_H