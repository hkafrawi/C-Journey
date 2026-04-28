#include <iostream>
using namespace std;

int main(){

    string texts[] = {"one","two","three"};

    cout << sizeof(string)<<endl;
    string *pTexts = texts;

    for  (int i=0; i<sizeof(texts)/sizeof(string); i++) {
        cout << pTexts[i] << " "<< flush;
    }
    
    cout << endl;
    
    for  (int i=0; i<sizeof(texts)/sizeof(string); i++) {
        cout << *pTexts << " "<< flush;
    }
/*
    cout << endl;
    for  (int i=0; i<sizeof(texts)/sizeof(string); i++) {
        cout << *pTexts << " "<< flush;
        pTexts += 1;
    }
*/
    cout << endl;
    for  (int i=0; i<sizeof(texts)/sizeof(string); i++, pTexts++) {
        cout << *pTexts << " "<< flush;
        
    }

    string *pElement = texts;
    string *pEnd = &texts[2];

    cout <<endl;
    while(true) {
        cout << *pElement << " " <<flush;
        if (pElement == pEnd){
            break;
        }
        pElement++;

    }



    return 0;
}