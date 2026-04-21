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
    string toString();
    string getName();
    int getAge();
    void SetName(string new_name);
    Cat();
    Cat(string new_name) { name = new_name; age = 0; };
    ~Cat();
 };


 #endif /* CAT_H_ */