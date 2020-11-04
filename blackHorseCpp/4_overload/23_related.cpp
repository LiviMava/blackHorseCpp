#include <iostream>
using namespace std;
class Person{
public:
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
    bool operator==(Person& p){
        return p.age==this->age && p.name==this->name;
    }
    bool operator!=(Person& p){
        return !p.age==this->age && p.name==this->name;
    }
private:
    string name;
    int age;
};
void test1(){
    Person p1("王五",12);
    Person p2("王五",12);
    if(p1==p2){
        cout<< "相等" << endl;
    }else{
        cout<< "不相等" << endl;
    }
}
void test2(){
    Person p1("王五",12);
    Person p2("王五",12);
    if(p1!=p2){
        cout<< "不相等" << endl;
    }else{
        cout<< "相等" << endl;
    }
}
int main() {
    test1();
    test2();
    return 0;
}