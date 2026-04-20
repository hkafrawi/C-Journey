#include <iostream>
#include "Cat.h"
using namespace std;

int main() {
    
    Cat cat1;

    cat1.makeHappy();
    cat1.speak();

    Cat cat2;
    cat2.makeSad();
    cat2.speak();
    return 0;
}