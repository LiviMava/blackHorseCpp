#include <iostream>
using namespace std;
class Person{
public:
    int a;
    void fun(){
    }
    static int age;
    static void func(){
    }
};
//int Person::age = 0;

void test1(){
    Person p;
    //空对象1个字节
    cout << "sizeof:" << sizeof(p) << endl;
}
void test2(){
    Person p;
    //一个int 4个字节
    cout << "sizeof:" << sizeof(p) << endl;
}
void test3(){
    Person p;
    //非静态成员函数 +0个
    cout << "sizeof:" << sizeof(p) << endl;
}
void test4(){
    Person p;
    //静态成员变量 +0个
    cout << "sizeof:" << sizeof(p) << endl;
}
void test5(){
    Person p;
    //静态成员函数 +0个
    cout << "sizeof:" << sizeof(p) << endl;
}
//得出结论：只有非静态成员变量如 int a;是属于类的对象的
int main() {
    test5();
    return 0;
}
