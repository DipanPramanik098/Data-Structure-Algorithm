#include <bits/stdc++.h>
#include<iostream>
// 
#include "bird.h"

void birdDoesSomething(Bird *&bird){
    bird->eat();
    bird->fly();
}
using namespace std;
    
int main(){
    Bird*bird = new Sparrow();
    birdDoesSomething(bird);
    return 0;
}