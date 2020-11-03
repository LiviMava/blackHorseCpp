#include <iostream>
using namespace std;
class Person{
public:
    //常函数;成员函数后加const修饰的是this;this由Person* const this变为const Person* const this
    void fun() const{
        //this->age = 10;
        h = 10;
    }
    void func(){ }
    Person(){ }
    int age;
    mutable int h;
};
//常对象：只能调用常函数，可以修改常属性
void test1(){
    const Person p1;
    p1.h = 30;
    cout << p1.h << endl;
//    p1.func();
    p1.fun();
}
int main() {
    test1();
    return 0;
}
