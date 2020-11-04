#include <iostream>
using namespace std;
class Person{
public:
    Person(int age, int h){
        this->age = age;
        height = new int(h);
        cout << "有参构造" << endl;
    }
    Person(const Person& p){
        age = p.age;
        height = new int(*p.height);
        cout << "浅拷贝" << endl;
    }
    ~Person(){
        if(height != NULL){
            delete height;//浅拷贝vs会崩 因为释放了两次堆区指定位置的内存
            height = NULL;
        }
        cout << "析构" << endl;
    }
    int age;
    int* height;
};
void test1(){
    Person p1(10,30);
    cout << p1.age << *p1.height << endl;
    Person p2(p1);
    cout << p2.age << *p2.height << endl;
}
int main() {
//    int* p1 = new int(10);
//    int* p2 = p1;
//    cout << (long long)p1 << endl << (long long)p2 << endl;
//    delete p1;
//    delete p2;
    test1();//浅拷贝的错误等价于以上这段代码
    return 0;
}
