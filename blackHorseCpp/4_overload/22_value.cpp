#include <iostream>
using namespace std;
class Person{
    friend void test1();
public:
    Person(int height){
        this->height = new int (height);
    }
    Person& operator=(Person& p){
        //先判断是否有属性在堆区 有的话先释放 然后深拷贝
        if(height != NULL){
            delete height;
            height=NULL;
        }
        height = new int(*p.height);
        return *this;
    }
    ~Person(){
        if(height != NULL){
            delete height;
            height = NULL;
        }
    }
private:
    int* height;
};
void test1(){
    Person p1(10);
    Person p2(20);
    Person p3(30);
    p3 = p2 = p1;//需要先释放p2的内容再赋值
    cout<< *p1.height << endl;
    cout<< *p2.height << endl;
    cout<< *p2.height << endl;
}
int main() {
    test1();
    return 0;
}