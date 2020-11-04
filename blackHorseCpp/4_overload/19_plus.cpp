#include <iostream>
using namespace std;
class Person{
public:
    int age;
    int height;
    Person(){
        age = 10;
        height = 10;
    }
//    成员函数重载
//    Person operator+(Person& p){
//        Person p3;
//        p3.age = this->age + p.age;
//        p3.height = this->height + p.height;
//        return p3;
//    }
};
//全局函数重载
Person operator+(Person& p1, Person& p2){
    Person p3;
    p3.age = p1.age + p2.age;
    p3.height = p1.height + p2.height;
    return p3;
}
//函数重载
Person operator+(Person& p1, int a){
    Person p3;
    p3.age = p1.age + a;
    p3.height = p1.height + a;
    return p3;
}
void test(){
    Person p1;
    Person p2;
    cout << p1.age << ":" << p1.height << endl;
    cout << p2.age << ":" << p2.height << endl;
    Person p3 = p1 + p2;
    cout << p3.age << ":" << p3.height << endl;
    p3 = p3 + 10;
    cout << p3.age << ":" << p3.height << endl;
}
int main() {
    test();
    return 0;
}
