#include <iostream>
using namespace std;
class Person{
public:
    Person():age(10),height(120){}
    Person(int a, int h):age(a),height(h){}
    int age;
    int height;
};
void test1(){
    Person p1;
    cout << p1.age << p1.height << endl;
    Person p2(20,170);
    cout << p2.age << p2.height << endl;
}
int main() {
    test1();
    return 0;
}
