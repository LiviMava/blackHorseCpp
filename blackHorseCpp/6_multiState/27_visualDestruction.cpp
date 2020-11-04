#include <iostream>
using namespace std;
class Animal{
public:
    virtual void say() = 0;
};
class Cat: public Animal{
public:
    void say(){
        cout<< "猫说" << endl;
    }
};
class Dog: public Animal{
public:
    void say(){
        cout<< "狗说" << endl;
    }
};
void test(){
    Animal* animal = new Cat;
    animal->say();
}
int main() {
    test();
    return 0;
}