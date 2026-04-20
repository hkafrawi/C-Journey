#include <iostream>

#include "Cat.h"

using namespace std;

Cat::Cat(){
    cout << "Cat created..." << endl;
    happy = true;
}

Cat::~Cat(){
    cout << "Cat destroyed..." << endl;
}

void Cat::speak() {
    if(happy){
        cout << "Meowwww!!!" << endl;
    }
    else{
        cout << "Ssssss!!!" << endl;
    }
    
}

void Cat::makeHappy() {
    happy = true;
}

void Cat::makeSad() {
    happy = false;
}

void Cat::jump() {
    cout << "Jumping!" << endl;
}