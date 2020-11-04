#include <iostream>
using namespace std;
class Building{
    friend class Person;//删除这行体会区别
private:
    int age;
public:
    Building(){
        age = 100;
    }
};
class Person{
public:
    Building building;
    void visit();
};
void Person::visit() {
    cout<< building.age << endl;
}
void test(Building& b){
    Person p;
    p.visit();
}
int main() {
    Building b;
    test(b);
    return 0;
}
