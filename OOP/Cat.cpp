#include <iostream>
#include <sstream>

#include "Cat.h"

using namespace std;


Cat::Cat(){
    name = "";
    age = 0;
    happy = true;
}

Cat::Cat(string name, int age, bool happy){
    this->name = name;
    this->happy = happy;
    this->age = age;   
    
    cout<<"Memory location of object: " << this << endl;
}

Cat::~Cat(){
    cout << "Cat destroyed..." << endl;
}

void Cat::toString() {
    stringstream ss;
    cout << "Cat created.." << endl;
    ss << "Name:";
    ss << name;
    ss << "; Age: ";
    ss << age;
    ss << "; Happy: ";
    ss << happy;
    cout<<ss.str()<<endl;
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