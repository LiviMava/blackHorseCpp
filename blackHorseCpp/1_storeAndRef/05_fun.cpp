#include <iostream>
using namespace std;
//1、c++函数形参可以有默认值，且其后都要有默认值
int func(int a, int b = 10, int c = 10){
    return a+b;
}
//2、声明、实现只能选其一有默认值
int fund(int a, int b);

int fund(int a = 20, int b = 20){
    return 1;
}
//3、占位参数，也可以有默认值
void fune(int = 10){
    cout<< "this is fune" << endl;
}
//4、引用作为重载的条件
void fun(int &a){//int& a = 10;不合法
    cout << "(int &a)" << endl;
}
void fun(const int &a){//const int& a = 10;合法 相当于创建了个临时变量temp=10
    cout << "(const int &a)" << endl;
}
//5、重载遇到默认值
void funn(int a, int b = 10){
    cout << "funn(int a, int b = 10)" << endl;
}
void funn(int a){
    cout << "funn(int a)" << endl;
}
int main() {
    cout<< func(10) << endl;
    fune(10);
    int a = 10;
    fun(a);
    fun(10);
    //funn(10);error 但可以传两个参数如下
    funn(10,20);
    return 0;
}
