#include <iostream>
using namespace std;
class Building;
class Person{
public:
    Person();
    Building* building;
    void visit();
    void notFriend();
};
class Building{
    friend void Person::visit();//visit可以而notFriend不可以访问其私有
private:
    int kt;
};
Person::Person(){
    building = new Building;
}
void Person::visit() {
    cout<< sizeof(building->kt) << endl;
}
//void Person::notFriend() {
//    cout<< sizeof(building->kt) << endl;
//}
//error
//！！！！！！注意visit都要在类外实现 否则会报错
int main() {
    Person p;
    p.visit();
    return 0;
}
