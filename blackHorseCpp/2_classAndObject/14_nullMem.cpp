#include <iostream>
using namespace std;
class Person{
public:
    void fun(){
        cout << "空指针可以访问成员函数" << endl;
    }
};

void test1(){
    Person* p1 = NULL;
    p1->fun();
}
int main() {
    test1();
    return 0;
}
