#include <iostream>
using namespace std;
class Person{
    friend ostream& operator<<(ostream& cout, Person& p);
private:
    int age;
    int height;
public:
    Person(){
        age = 10;
        height = 10;
    }
};
//全局函数重载 不用成员函数是因为cout要在左侧
//void operator<<(ostream& cout, Person& p){
//    cout<< "age:" << p.age << ", height:" << p.height << endl;
//}
//链式编程
//全局函数作友元
ostream& operator<<(ostream& cout, Person& p){
    cout<< "age:" << p.age << ", height:" << p.height << endl;
    return cout;
}
void test(){
    Person p;
    cout<< p << endl;
}
int main() {
    test();
    return 0;
}
