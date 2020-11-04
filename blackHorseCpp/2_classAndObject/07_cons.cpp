#include <iostream>
using namespace std;
class Person{
private:
    int age;
public:
    //定义了拷贝构造，不再提供其他构造；定义有参构造还会提供拷贝构造
    Person(){
        cout << "默认构造" << endl;
    }
    Person(int age){
        this -> age = age;
        cout << "有参构造" << endl;
    }
    Person(const Person& p){
        age = p.age;
        cout << "拷贝构造" << endl;
    }
    ~Person(){
        cout << "析构" << endl;
    }
};
//调用
void test1(){
    //1、括号法
    Person p1;
    Person p2(10);
    Person p3(p2);
    /*默认构造不要加括号，会被当成函数声明*/
    Person p4();
    void p5();
    //2、显示法
    Person p6;
    Person p7 = Person(10);
    Person p8 = Person(p7);
    Person(10);//匿名对象，这行执行完立即回收
    /*Person(p2);error重定义*/
    //3、隐式法
    Person p9 = 10;//相当于Person(10)
    Person p10 = p9;//相当于Person(p9)
}
void temp1(Person p){

}
void test2(){
    Person p;
    temp1(p);//值传递调用拷贝构造
}
Person temp2(){
    Person p;
    return p;
}
void test3(){
    Person p = temp2();//CLion不会调用拷贝构造 VS会
}
int main() {
//    test1();
//    test2();
    test3();
    return 0;
}
