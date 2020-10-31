#include <iostream>
using namespace std;
//4、引用传递：优点是不需要使用指针，在这里a是是c的别名，b是d的别名
void mySwap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
//5、引用做函数的返回值
int& test(){
    static int x = 1;
    return x;
}
//8、修饰形参，防止误修改
void showValue(const int& m){
    //m=10000;
    cout << "m:" << m << endl;
}
int main() {
    int a = 10;
    int c = 30;
    int d = 40;
    int &b = a;//1、必须初始化
    //int &b = c; error 2、不能更改引用
    cout << "b=" << b << endl;
    b = 20;
    cout << "a=" << a << endl;
    b = c;//3、赋值
    cout << "b=" << b << endl;

    cout << "交换前c、d" << c << "、" << d << endl;
    mySwap(c,d);
    cout << "交换后c、d" << c << "、" << d << endl;

    int &ref = test();
    cout << "ref:" << ref << endl;
    test() = 1000;//6、函数返回值是引用，则此函数调用可以作为左值
    cout << "ref:" << ref << endl;
    //7、引用实质是一个指针常量，int* const ref = &a;

    int m = 1;
    showValue(m);
    return 0;
}
