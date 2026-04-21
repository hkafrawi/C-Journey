#include <iostream>
#include "Cat.h"
using namespace std;

int main() {
    {
        Cat cat1;
        cat1.speak(); //cat1 by default happy
        //cout << cat1.toString() << endl;
        //cout << "Name with get method " + cat1.getName() <<endl;
        //cout << cat1.getAge() << endl;
    } // cat1 only live here

    Cat cat2;
    cat2.SetName("Misho");
    cat2.makeSad();
    cat2.speak();
    cout << cat2.toString() << endl;

    return 0;
}