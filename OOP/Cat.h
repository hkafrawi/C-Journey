 #ifndef CAT_H_
 #define CAT_H_

 #include <iostream>
 using namespace std;
 
 class Cat{
 private:
    bool happy;
    string name;
    int age;

 public:
    void makeHappy();
    void makeSad();
    void speak();
    void jump();
    void toString();
    string getName();
    int getAge();
    void SetName(string new_name);
    Cat();
    Cat(string name, int age, bool happy);
    ~Cat();
 };


 #endif /* CAT_H_ */