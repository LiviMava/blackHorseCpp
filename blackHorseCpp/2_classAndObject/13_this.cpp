#include <iostream>
using namespace std;
class Person{
public:
    int age;
    Person(int a):age(a){}
    void PAddP1(Person& p){
        this->age += p.age;
    }
    Person PAddP2(Person& p){
        this->age += p.age;
        return *this;
    }
    //返回p1本体必须要加引用
    Person& PAddP3(Person& p){
        this->age += p.age;
        return *this;
    }
};

void test1(){
    Person p1(10);
    Person p2(10);
    p1.PAddP1(p2);
    cout << p1.age << endl;

}
void test2(){
    Person p3(10);
    Person p4(10);
    cout << p3.PAddP2(p4).PAddP2(p4).PAddP2(p4).PAddP2(p4).PAddP2(p4).age << endl;
    cout << p3.age << endl;
}
void test3(){
    Person p5(10);
    Person p6(10);
    cout << p5.PAddP3(p6).PAddP3(p6).PAddP3(p6).PAddP3(p6).PAddP3(p6).age << endl;
    cout << p5.age << endl;
}
int main() {
    cout<< "test1:" << endl;
    test1();
    cout<< "test2:" << endl;
    test2();
    cout<< "test3:" << endl;
    test3();
    //test2和test3是加不加引用的区别
    return 0;
}
