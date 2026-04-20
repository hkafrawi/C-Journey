#include <iostream>
#include "Cat.h"
using namespace std;

int main() {
    {
        Cat cat1;
        cat1.speak(); //cat1 by default happy
    } // cat1 only live here

    Cat cat2;
    cat2.makeSad();
    cat2.speak();
    return 0;
}