#include <iostream>
#include <sstream>

#include "Cat.h"

using namespace std;

Cat::Cat(){
    stringstream ss;
    name = "Lilly";
    happy = true;
    age = 0;
    cout << "Cat created.." << endl;
    ss << "Name:";
    ss << name;
    ss << "; Age: ";
    ss << age;
    ss << "; Happy: ";
    ss << happy;
    cout << ss.str() << endl;
    //cout << "Cat created..." << endl;
    
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

int Cat::getAge() {
    return age;
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