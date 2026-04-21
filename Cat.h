 #ifndef CAT_H_
 #define CAT_H_

 #include <iostream>
 using namespace std;
 
 class Cat{
 private:
    bool happy;
    string name;

 public:
    void makeHappy();
    void makeSad();
    void speak();
    void jump();
    string toString();
    string getName();
    void SetName(string new_name);
    Cat();
    ~Cat();
 };


 #endif /* CAT_H_ */