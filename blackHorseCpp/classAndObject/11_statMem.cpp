#include <iostream>
using namespace std;
class Person{
public:
    static void fun(){
        age = 10;
        cout << "静态成员函数" << age << endl;
    }
    static int age;
};
int Person::age = 0;

void test1(){
    Person p1;
    p1.fun();//对象调用
    Person::fun();//类名调用
}
int main() {
    test1();
    return 0;
}
