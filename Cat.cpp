#include <iostream>

#include "Cat.h"

using namespace std;

Cat::Cat(){
    cout << "Cat created..." << endl;
    name = "Lilly";
    happy = true;
}

Cat::~Cat(){
    cout << "Cat destroyed..." << endl;
}

string Cat::toString() {
    return name;
}

string Cat::getName() {
    return name;
}

void Cat::SetName(string new_name) {
    name = new_name;
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