#include <iostream>
using namespace std;
//多态 引用实现
class Animal{
public:
    //虚函数：地址晚绑定
    virtual void say(){
        cout<< "动物说" << endl;
    }
};
class Cat: public Animal{
public:
    void say(){
        cout<< "猫说" << endl;
    }
};
class Dog: public Animal{
public:
    void say(){
        cout<< "狗说" << endl;
    }
};
//地址早绑定 结果是动物说
//若想让猫说 则函数地址不能提前绑定 即地址晚绑定 在运行期间 在say前加virtual
//动态多态满足的条件
//1、要有继承关系
//2、子类要重写父类虚函数
//动态多态的使用
//父类引用or指针指向子类对象
void doSay(Animal& animal){
    animal.say();
}
int main() {
    Cat cat;
    doSay(cat);
    Dog dog;
    doSay(dog);
    cout<< "sizeofAnimal=" << sizeof(Animal) << endl;
    return 0;
}