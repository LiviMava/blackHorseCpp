#include <iostream>
using namespace std;
class Phone{
public:
    string pName;
    Phone(string p):pName(p){cout << "Phone构造" << endl;}
    ~Phone(){cout << "Phone析构" << endl;}
};
class Person{
public:
    //ph(pN)相当于隐式构造 Phone ph = pN -> Phone ph(pN);
    Person(int a, string pN):age(a),ph(pN){cout << "Person构造" << endl;}
    ~Person(){cout << "Person析构" << endl;}
    int age;
    Phone ph;
};
void test1(){
    Person p1(10, "华为");
    cout << p1.age << p1.ph.pName << endl;
}
int main() {
    test1();
    return 0;
}
