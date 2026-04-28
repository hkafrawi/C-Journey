#include <iostream>

using namespace std;


void manipulate(double *value){
    cout << "2. Value of int in function: "<<*value<<endl;

    *value = 10.0;
    cout << "3. Value of int in function: "<<*value<<endl;
}
int main(){
    int nValue = 8;

    int* p_value = &nValue;

    nValue = 9;

    cout << "In Value: " << nValue << endl;
    cout << "Value Address: " << p_value<<endl;

    cout << "Int value via pointer: " << *p_value<<endl;

    cout <<"=========================="<<endl;
    double dvalue = 123.4;
    cout << "1. dValue: "<< dvalue <<endl;
    manipulate(&dvalue);
    cout << "4. dValue: "<< dvalue <<endl;

    return 0;
}