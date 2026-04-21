#include <iostream>
#include "Cat.h"
using namespace std;

int main() {
    {
        Cat cat1("Lilly",2,true);
        cat1.toString();
        cat1.speak(); //cat1 by default happy
        cout<< "Memory Location of object: " << &cat1 <<endl;
    } // cat1 only live here

    Cat cat2("Misho",4,false);
    cat2.toString();
    cat2.speak();
    cout<< "Memory Location of object: " << &cat2 <<endl;

    return 0;
}